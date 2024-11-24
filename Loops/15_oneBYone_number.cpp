#include <iostream>
using namespace std;

int main(){
    int linesDemanded = 5, n = 1; // Make a variable 
    
    for (int line = 1; line <= linesDemanded; line++) 
    {
        for (int star = 1; star <= line; star++) {
            cout << n++ << " "; // Update it with every iteration
        }
        cout << endl;
    }

    return 0;
}


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
