// with backtarcking
// input  : 4
// output : 4 3 2 1  


#include <iostream>
using namespace std;

int counting(int i, int n){
    if (i > n) return 0;
    
    cout << n-i + 1<< " ";
    counting(i+1, n);
}


int main(){
    int num = 4;
    counting(1, num);

    return 0;
}