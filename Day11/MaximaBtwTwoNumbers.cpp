//Program to find the maxima of two number using function

#include<bits//stdc++.h>
using namespace std;

int Max(int a , int b){
    return a>b ? a : b;
}

int main(){
    int num1,num2;
    cout<<"Enter the value of 1st number : ";cin>>num1;
    cout<<"Enter the value of 2nd number : ";cin>>num2;

    cout<<"The Maximum between the two numbers is = "<<Max(num1,num2);
    return 0;
}