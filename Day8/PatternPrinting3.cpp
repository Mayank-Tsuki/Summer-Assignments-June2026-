//Write a program to Print character triangle.
//A
//A B
//A B C
//A B C D
//A B C D E 

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n(lenght of alphabet) :";cin>>n;

    for (int i = 65 ; i<= n + 65 -1; i ++){
        for (int j = 65 ; j<= i; j ++){  
            char ch = (char)j;
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}