//Program to find the sum of two number using function

#include<bits//stdc++.h>
using namespace std;

int sum(int a , int b){
    return a+b;
}

int main(){
    int num1,num2;
    cout<<"Enter the value of 1st number : ";cin>>num1;
    cout<<"Enter the value of 2nd number : ";cin>>num2;
    cout<<"The sum of the two number = "<<sum(num1,num2);
    return 0;
}