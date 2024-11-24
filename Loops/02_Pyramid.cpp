#include <iostream>
// Half Pyramid
using namespace std;

int main(){
    int linesDemanded = 5;
    for (int line = 1; line <= linesDemanded; line++) // Kitni lines print krni hai = linesDemanded
    {
        for (int star = 1; star <= line; star++) // Mujhe line ki value ke sath-sath star chiye tha toh maine star aur line ko link kr dia by saying ( star <= line )
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}




 //      * 
 //      *  *
 //      *  *  *
 //      *  *  *  *
 //      *  *  *  *  *