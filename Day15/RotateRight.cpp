#include<bits//stdc++.h>
using namespace std;

//Rotating array to Right!
void RotateRight(int arr[],int size,int k){
    k = k%size;
    int temp[k];
    for(int i = 0 ; i < k ; i++){
        temp[i] = arr[size - k + i];
    }

    for(int i = size - k - 1 ; i >= 0 ; i--){
        arr[i+k] = arr[i];
    }

    for(int i = 0 ; i < k ; i++){
        arr[i] = temp[i];
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

    RotateRight(arr,size,d);
    DisplayArray(arr , size);
    return 0;
}