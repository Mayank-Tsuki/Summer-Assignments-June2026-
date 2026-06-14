//Write a program to Linear Search

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

    //Finding Diplicate
    cout<<"Duplicate elements : ";
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] == arr[j]) {
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}