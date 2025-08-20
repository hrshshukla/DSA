// intput = 4
// Output = 1 2 3 4 

#include <iostream>
using namespace std;

int counting(int i, int n){
    if (i > n) return 0;
    
    cout << i << endl;
    return counting(i+1, n);
}

int main(){
    counting(1, 10);
    return 0;
}