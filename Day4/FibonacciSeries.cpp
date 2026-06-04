//Write a program to generate fibonacci series
// 1 1 2 3 5 8 13 21 .....

#include<bits/stdc++.h>
using namespace std;

int fibseries(int n) {
    if(n == 1 || n == 0) return n;
    return fibseries(n-1) + fibseries(n-2);
}

int main() {
    int n;
    cout<<"Enter number of terms: ";cin>>n;

    cout<<"Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << fibseries(i) << " ";
    }
    return 0;
}
