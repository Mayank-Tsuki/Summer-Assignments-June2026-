//Program to check the number is prime or not

#include<bits//stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;

    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the value of number : ";cin>>num;

    if(isPrime(num)) cout<<"Yes!,the number is Prime.";
    else cout<<"No!,the number is not Prime.";

    return 0;
}