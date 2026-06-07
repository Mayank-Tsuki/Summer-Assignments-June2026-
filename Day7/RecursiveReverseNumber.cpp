//Write a program to recursive reverse number

#include<bits//stdc++.h>
using namespace std;

int RevNum(int n , int temp){
    if(n==0) return temp;
    return RevNum(n/10,temp*10+(n%10));
}

int main(){
    int num;
    cout<<"Enter the number : ";cin>>num;

    cout<<"The reverse of the number is : "<<RevNum(num,0);
    return 0;
}