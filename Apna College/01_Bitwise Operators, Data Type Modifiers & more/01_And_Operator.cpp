#include <iostream>
// (&) means dot(.) 

//    (4) = 0100
//  & (8) = 1000
// ----------------
//    (0) = 0000

using namespace std;

int main(){
    cout << (4 & 8 )<< endl; // Ouput : 0
    return 0;
}