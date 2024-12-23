#include <iostream>
// What will happen if we try to store values in a datatype more than its capacity.
using namespace std;

int main(){
    char ch1 = 123456; // converting (123456) to binary ----> [ 11110001001000000 ] this is total 17-bit number and (char) can store only (1 byte) = 8 bits 
                       // So, from 17 bit only (8 bit) number will be stored and rest 17-8 = (9 bits) will be ignored 
                    
                       // hence, [ 11110001001000000 ] --> [ 1111000100 |  1000000 ] --> (Only 1000000 will stored) --> 1000000 = 64 ASCII --> "@"
                       //             (17 bits)        -->    (9 bits)  |  (8 bits)  --> (Only 8 bits will stored)
 
    cout << int(ch1) << endl; // Output = 64
    cout << ch1 << endl; // Output = @
    return 0;
}
