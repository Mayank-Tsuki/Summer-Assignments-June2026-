//Write a program to find x^n without pow fnc

#include<bits//stdc++.h>
using namespace std;
int main(){
    int base;
    int pow;
    int ans=1;
    cout<<"Enter the Base Number:";cin>>base;
    cout<<"Enter the power Number:";cin>>pow;
    for(int i = 1 ; i <= pow ; i++){
        ans *= base;
    }
    cout<<"Answer : "<<ans;
    return 0;
}