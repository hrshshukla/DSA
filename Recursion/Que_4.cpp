// with backtarcking
// input  : 4
// output : 1 2 3 4 

#include <iostream>
using namespace std;

int counting(int i, int n){
    if (i < 1) return 0;
    
    counting(i-1, n);
    cout << i << " ";
}


int main(){
    int num = 4;
    counting(num, num);

    return 0;
}