#include <iostream>
// SImple Square 
using namespace std;

int main(){
    int linesDemanded = 5;
    for (int line = 1; line <= linesDemanded; line++) // Kitni lines print krni hai = linesDemanded
    {
        for (int star = 1; star <=linesDemanded; star++) // Har line me kitne stars hone chiye = linesDemanded
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}

// Output: 
//         *  *  *  *  * 
//         *  *  *  *  *
//         *  *  *  *  *
//         *  *  *  *  *
//         *  *  *  *  *
