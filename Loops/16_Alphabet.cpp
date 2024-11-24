#include <iostream>
// Learning :
// ----------> aplhabet++

using namespace std;

int main(){
    int linesDemanded = 5;
    char alphabet= 'A'; // Make a variable 
    
    for (int line = 1; line <= linesDemanded; line++) 
    {
        for (int star = 1; star <= line; star++) {
            cout << alphabet++ << " "; // Update it with every iteration
        }
        cout << endl;
    }

    return 0;
}


//    A 
//    B C
//    D E F
//    G H I J
//    K L M N O