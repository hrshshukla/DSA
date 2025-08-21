// print name 5 times using recursion

#include <iostream>
using namespace std;

int name(int i,int n){
    if (i>n) return 0;

    cout << "Harsh" << endl;
    return name(i, n-1);
}

int main(){

    int start = 1;
    int end = 9;

    name(start, end);

    return 0;
}