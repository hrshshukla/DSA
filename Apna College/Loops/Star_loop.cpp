#include <iostream>

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
        for(int space = 2; space<= line; space++){
            cout << "  ";
        }
        for(int space = 3; space<= line; space++){
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

        for (int space = line; space <= downLinesDemanded-1; space++)
        {
            cout << "  ";
        }
        for (int space = line; space <= downLinesDemanded-2; space++)
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