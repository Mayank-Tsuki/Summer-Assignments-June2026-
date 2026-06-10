//Write a program to convert binary to decimal

#include<bits//stdc++.h>
using namespace std;

int BiToDec(int n){
    int power = 0;
    int sum = 0;
    while(n>0){
        int temp = n % 10;
        sum += temp*pow(2,power);
        n /= 10;
        power++;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the number:";cin>>num;

    cout<<"binary val:("<<num<<") <-> decimal val:("<<BiToDec(num)<<")";
    return 0;
}