//Write a program to find the GCD of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    int GCD;
    bool flag = false;
    cout<<"Enter the first number:";cin>>num1;
    cout<<"Enter the second number:";cin>>num2;

    for(int i = min(num1,num2) ; i > 1 ; i--){
        if(num1%i == 0 && num2%i == 0){
            GCD = i;
            flag=true;
            break;
        }
    }
    
    if(flag==false) cout<<"The GCD of the given numbers is 1";
    else cout<<"The GCD of the given numbers is "<<GCD;
    return 0;
}
