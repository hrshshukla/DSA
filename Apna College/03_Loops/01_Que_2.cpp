#include <iostream>

using namespace std;

int main(){
    int linesDemanded = 4;

    for (int line = 0; line <= linesDemanded; line++)
    {
        for (int space = line; space <= linesDemanded; space++) 
        {
            cout << "  "; 
        }

        for (int number = 1; number <= line; number++) // Ye ek line kam print karega 
        {
            cout << number << " ";
        }

        for (int number = line; number >=0; number--) 
        {
            cout << number+1 <<" ";
        }
        
        cout << endl;
    }
    
    return 0;
}


// First Triangle +  2nd Triangle = Final triangle
//                     1               1
//             1       2 1           1 2 1
//           1 2       3 2 1       1 2 3 2 1