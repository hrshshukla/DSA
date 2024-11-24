#include <iostream>
using namespace std;

int main(){
    int linesDemanded = 5;
    char alphabet = 'A';
    for (int line = 1; line <= linesDemanded; line++) 
    {
        for (int star = 1; star <= line; star++) {
            cout << alphabet<< " ";
        }
        alphabet++; // updated outside of loop because inside of loop will not work
        cout << endl;
    }
    return 0;
}

/*

        A 
        B B
        C C C
        D D D D
        E E E E E

*/