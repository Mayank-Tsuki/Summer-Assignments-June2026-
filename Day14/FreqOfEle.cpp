//Write a program to Frequency of an element

#include<bits//stdc++.h>
using namespace std;

void displayArray(int arr[], int size) {
    cout<<"Array : ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n ;
    cout<<"Enter number of element:";cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    displayArray(arr,n);

    int num;
    int freq = 0;
    cout<<"Enter element of which frequency you want:";cin>>num;

    //Linear search with finding freq of element
    for (int i = 0 ; i < n ; i++){
        if(num==arr[i]) freq++;
    }
    cout<<"The total frequency of the element = "<<freq;     
    return 0;
}