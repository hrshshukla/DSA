#include <iostream>
// (^)XOR = similar gives (0)
// - -----> different gives (1)

//    (5)  = 0101
//  ^ (12) = 1100
// ----------------
//    (9) = 1001

using namespace std;

int main(){
    cout << (5 ^ 12)  << endl;  // Ouput : 9
    return 0;
}