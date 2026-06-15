#include<bits//stdc++.h>
using namespace std;

//Rotating array to left!
void RotateLeft(int arr[],int size,int k){
    k = k%size;
    int temp[k];
    for(int i = 0 ; i < k ; i++){
        temp[i] = arr[i];
    }

    for(int i = k ; i < size ; i++){
        arr[i-k] = arr[i];
    }

    for(int i = size - k ; i < size ; i++){
        arr[i] = temp[i-(size - k)];
    }
}

//Display array!
void DisplayArray(int arr[] , int n){
    cout<<"Array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 3;

    RotateLeft(arr,size,d);
    DisplayArray(arr , size);
    return 0;
}