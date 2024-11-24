#include <iostream>
// Half Mirror Pyramid
using namespace std;

int main(){
    int linesDemanded = 5;
    for (int line = 1; line <= linesDemanded; line++) // Jab tak line = linesDemanded nhi hojati lines print krte raho 
    {
        for (int star = line; star <= linesDemanded; star++) // Mujhe har baar ek star kam chiye tha toh star = line isse 2nd iteration me star ki value (2) hogi toh condition hogi 2 <= linesDemanded       {
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}




//       *  *  *  *  * 
//       *  *  *  *
//       *  *  *
//       *  *
//       *