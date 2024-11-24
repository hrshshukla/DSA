#include <iostream>
// Simple Square 
using namespace std;

int main(){
    int linesDemanded = 6;
     char chr = ('A'-1); // <--- ('A'-1) <---- (65-1) = 64

    for (int line = 1; line <= linesDemanded; line++) // Kitni lines print krni hai = linesDemanded
    { 
        for (int star = 1; star <=linesDemanded; star++) // Har line me kitne stars hone chiye = linesDemanded
        {
            cout << ++chr << " ";
        }
        cout << endl;
    }


    return 0;
}



