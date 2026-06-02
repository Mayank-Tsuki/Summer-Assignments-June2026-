//Write a program to find the product of digits of a number
#include<iostream>
using namespace std;
int main(){
    int num;
    int product = 1;
    cout<<"Enter the number:";cin>>num;
    while(num>0){
        int digit = num%10;
        product *= digit;
        num /= 10;
    }
    cout<<"The product of digits of the number is : "<<product;
    return 0;
}