#include <iostream>
// Two things to revise 
// ----> Printing Odd number of incrementing spaces 
// ----> Printing Odd number of decrementing spaces


using namespace std;

int main() {
    int linesDemanded ;
    
    cout << "Enter Lines demanded (enter value more than 3) : ";
    cin >> linesDemanded; // Assuming : linesDemanded = 8;
    
    if(linesDemanded%2==0){
        linesDemanded++; // linesDemanded = 9;
    }
    
    int UpLinesDemanded = ((linesDemanded+1)/2); // ((9+1)/2) = 10/2 = 5

    for(int line = 1; line <= UpLinesDemanded; line++){
        for(int space = line; space<= UpLinesDemanded; space++){
            cout << "  ";
        }
        cout << " *";

        for(int space = 2; space<= (2*(line - 1)); space++){ // Print odd number of increment spaces 
            cout << "  ";
        }


        if(line!=1){
            cout << " *";
        }
        cout << endl;
        }
        
    int downLinesDemanded = (linesDemanded/2); // (9/2) = 4.5 = 4
    for(int line = 1; line<= downLinesDemanded; line++){
        for(int space = 0; space<=line; space++){
            cout << "  ";
        }
        cout << " *";

        for (int space = 2; space <=(2 * (downLinesDemanded - line)); space++) // Print odd number of decrement spaces 
        {
            cout << "  ";
        }


        if (line != downLinesDemanded){
            cout << " *";
        } 
        cout << endl; 
    }
    return 0;
    }

// Ouput :
// Enter Lines demanded (enter value more than 3) : 5

//        *
//      *   *
//    *       *
//      *   *
//        *
