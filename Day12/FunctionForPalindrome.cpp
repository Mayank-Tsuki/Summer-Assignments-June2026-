//Function for Palindrome

#include<bits//stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int revNum = 0;
    int copynum = n;

    while (copynum > 0) {
        int digit = copynum % 10;
        revNum = revNum * 10 + digit;
        copynum /= 10;
    }
    return (n == revNum);
}

int main() {
    int num;
    cout<<"Enter a number: ";cin>>num;

    if (isPalindrome(num)) cout<<num<<" is a Palindrome!";
    else cout<<num<<" is not a Palindrome!";

    return 0;
}