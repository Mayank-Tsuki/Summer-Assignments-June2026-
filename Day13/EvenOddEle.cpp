//Program to count even and odd in the array

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
    cout<<endl;

    int even = 0 , odd = 0 ;
    for (int i = 0 ; i < n ; i++){
        if(arr[i]%2 == 0) even++;
        else odd++;
    }

    cout<<"Total Even Number:"<<even<<endl;
    cout<<"Total Odd Number:"<<odd;

    return 0;
}