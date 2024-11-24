#include <iostream>
using namespace std;

int main(){
    int linesDemanded = 5; 
    
    for (int line = 1; line <= linesDemanded; line++) 
    {
        for (int star = 1; star <= line; star++) {
            cout << star << " "; 
        }
        cout << endl;
    }

    return 0;
}

    //  1 
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5
