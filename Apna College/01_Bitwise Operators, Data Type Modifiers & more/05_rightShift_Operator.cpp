#include <iostream>
// (>>) Left Shift Operator

// Question:
//---> (4) = 100
//---> (4 >> 1) = (100 >> 0) = (10)
//---> (10)   = (2)

// Here the 4 (100) shifted one digit (right-side) which leads to create new number (10) = 2
// (1) left shift = /2 
// (2) left shift = /4, so on..

using namespace std;

int main(){
    cout << (4 >> 1) << endl;  // Ouput : 2

     cout << (8 >> 3) << endl; //  Output : 2
    //    << (8 / 8 )

    return 0;
}