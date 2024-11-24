#include <iostream>
using namespace std;

int main(){
    int linesDemanded = 5;

    for (int line = 1; line <= linesDemanded; line++)
    {
        for (int space = line; space <= linesDemanded; space++) 
        {
            cout << " "; 
        }

        for (int star = 1; star <= line; star++) 
        {
            cout << " *";
        }
        cout << endl;
        
    }
    
    return 0;
}

//       *
//      * *
//     * * *
//    * * * *
//   * * * * *

