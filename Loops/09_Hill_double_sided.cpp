#include <iostream>


using namespace std;

int main(){
    int linesDemanded = 5;

    for (int line = 1; line <= linesDemanded-1; line++) // linesDemanded-1 to print one less line
    {
        for (int space = line; space <= linesDemanded; space++) 
        {
            cout << "  "; 
        }

        for (int star = 1; star <= line; star++) 
        {
            cout << "* ";
        }

        for (int star = 2; star <= line; star++)  
        {
            cout << "* ";
        }
        
        cout << endl;
        
    }

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

        for (int star = line+1; star <= linesDemanded; star++) 
        {
            cout << "* ";
        }

        
        cout << endl;
        
    }
    
    return 0;
}

//           *         
//         * * *       
//       * * * * *     
//     * * * * * * *   
//   * * * * * * * * * 
//     * * * * * * *   
//       * * * * *
//         * * *
//           *