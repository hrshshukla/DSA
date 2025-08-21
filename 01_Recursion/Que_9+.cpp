// better solution: check if given input is palindrome
// input : "harah" --> true
// input : "harsh" --> false

#include <iostream>
using namespace std;

bool isPlaindrome(string str, int n, int i){
    if (i>=n/2) return true;
    if (str[i] != str[n-i-1]) return false;
    
    return isPlaindrome(str, n, i+1);
};


int main(){
    string name = "harxh";
    int size = name.size();

    isPlaindrome(name, size, 0) ? cout << "true" : cout << "false";

    return 0;
}