//Write a program to convert decimal to binary

#include<bits//stdc++.h>
using namespace std;

string DecToBi(int n){
    string bi = "";
    while(n>0){
        int temp = n % 2;
        if(temp==0) bi= "0" + bi;
        else bi= "1" + bi;
        n /= 2;
    }
    return bi;
}
int main(){
    int num;
    cout<<"Enter the number:";cin>>num;

    cout<<"decimal val:("<<num<<") <-> binary val:("<<DecToBi(num)<<")";
    return 0;
}