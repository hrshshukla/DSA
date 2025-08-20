// intput = 4
// Output = 4 3 2 1 

#include <iostream>
using namespace std;

int counting(int i, int n){
    if (i > n) return 0;
    
    cout << n  << " ";
    return counting(i, n-1);
}

int main(){
    counting(1, 4);
    return 0;
}