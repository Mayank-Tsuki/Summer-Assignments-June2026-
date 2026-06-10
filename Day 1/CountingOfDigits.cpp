#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"Enter the number : ";cin>>num;
    while(num>0){
        count++;
        num/=10;
    }
    cout<<"The number of digits in the number = "<<count;
    return 0;
}