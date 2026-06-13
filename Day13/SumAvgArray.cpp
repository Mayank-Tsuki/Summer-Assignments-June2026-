//Program to find the sum and average in the array

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

    int sum = 0;
    float avg;
    for (int i = 0 ; i < n ; i++){
        sum += arr[i];
    }

    cout<<"The sum of the numbers in the array :"<<sum<<endl;
    cout<<"The average of the numbers in the array :"<<sum/n;

    return 0;
}