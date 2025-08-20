// my solution : check if given input is palindrome
// input : "harah" --> true
// input : "harsh" --> false

#include <iostream>
using namespace std;

string reverse(string word, int n, int i){
    if (i>=n/2) return word;
    
    swap(word[i], word[n-i-1]);
    return reverse(word, n, i+1);
};


int main(){
    string name = "harah";
    int size = name.size();

    string reversed =  reverse(name, size, 0);

    name == reversed ? cout << "true" : cout << "false";
    return 0;
}