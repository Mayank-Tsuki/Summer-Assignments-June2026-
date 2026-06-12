//Function for Armstrong

#include<bits//stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    if(num < 0) return false;
    string s = to_string(num);
    int n = s.length();
    int copynum = num;
    int compare = 0;

    while(copynum > 0){
        int t = copynum % 10;
        compare += pow(t, n);
        copynum /= 10;
    }
    return (num==compare);
}

int main() {
    int num;
    cout<<"Enter a number: ";cin>>num;

    if (isArmstrong(num)) cout << num << " is an Armstrong number";
    else cout << num << " is not an Armstrong number";

    return 0;
}