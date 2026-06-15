#include<bits//stdc++.h>
using namespace std;

//Reverse array!
void reverse(int arr[] , int n){
    int i = 0 , j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
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

    reverse(arr , size);

    DisplayArray(arr , size);
    return 0;
}