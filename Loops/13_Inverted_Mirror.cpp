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
        
        for (int star = line; star <= linesDemanded; star++)
        {
            cout << line<< " ";
        }
        
        cout << endl;
    }
    
    return 0;
}


/*

  1 1 1 1 1 
    2 2 2 2
      3 3 3
        4 4
          5 

*/