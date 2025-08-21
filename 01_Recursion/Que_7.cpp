// Similar to factorial : n * (n-1) but here we do n + (n-1)
// Input = 4 
// Output = 10 

#include <iostream>
using namespace std;

int sum(int num){
    if (num <= 1) return 1;

    return num + sum(num-1);
}

int main(){
    int num = 4;
    cout << sum(4) << endl;
    return 0;
}