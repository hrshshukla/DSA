#include <iostream>


using namespace std;

int main(){
    int linesDemanded = 5;

    for (int line = 1; line <= linesDemanded; line++)
    {
        for (int space = 1; space <= line; space++) 
        {
            cout << "  "; 
        }

        for (int star =line; star <= linesDemanded; star++) 
        {
            cout << "* ";
        }

        for (int star = line+1; star <= linesDemanded; star++) // Line + 1 to print one less line 
        {
            cout << "* ";
        }

        
        cout << endl;
        
    }
    
    return 0;
}

//   * * * * * * * * * 
//     * * * * * * *
//       * * * * *
//         * * *
//           *
