//Program to input and display element of array

#include<bits//stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number of element:";cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Array : ";
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}