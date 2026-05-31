#include<iostream>
using namespace std;
int main(){
        int num;
        int sum=0;
        cout<<"Enter the number upto which you want sum : ";
        cin>>num;
        for(int i=1 ; i<=num ; i++){
            sum += i;
        }
        cout<<"The sum of all the natural numbers upto "<<num<<" is : "<<sum;
        return 0;
}