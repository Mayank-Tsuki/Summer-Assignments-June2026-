//Program to check Perfect Number

#include<bits//stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number that you want to check : ";cin>>num;
    int check = 1;
    for(int i = 2 ; i <= num/2 ; i++){
        if(num%i == 0) check += i;
    }
    if(check==num) cout<<"Yes,the number is a perfect number";
    else cout<<"The number is not a perfect number";

    return 0;
}