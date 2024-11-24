#include <iostream>
// Learning :
// ----------> ( line++ = space-- ) opposte relation me intialization 
// ----------> ( line++ = stars++ ) condition
// ---------->   2 digit "__" = 2 digit "* "

using namespace std;

int main(){
    int linesDemanded = 5;

    for (int line = 1; line <= linesDemanded; line++)
    {
        for (int space = line; space <= linesDemanded; space++)  
        {
            cout << "  "; 
        }

        for (int star = 1; star <= line; star++) {
            cout << line << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}


/*

          1 
        2 2
      3 3 3
    4 4 4 4
  5 5 5 5 5

*/