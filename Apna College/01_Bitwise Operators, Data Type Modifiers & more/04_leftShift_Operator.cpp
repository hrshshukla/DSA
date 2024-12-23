#include <iostream>
// (<<) Left Shift Operator

// Question:
//---> (4) = 100
//---> (4 << 1) = (100 << 0) = (1000)
//---> (1000)   = (8)

// Here the 4 (100) shifted one digit (left-side) which leads to create new number (1000) = 8.
// (1) left shift = x2 
// (2) left shift = x4, so on..

using namespace std;

int main(){
    cout << (4 << 1)  << endl;  // Output : 8

    cout << (10 << 2) << endl; //  Output : 40
    //   << (10 * 4 )

    return 0;
}