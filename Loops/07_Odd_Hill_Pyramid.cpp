#include <iostream>


using namespace std;

int main(){
    int linesDemanded = 5;

    for (int line = 1; line <= linesDemanded; line++)
    {
        for (int space = line; space <= linesDemanded; space++) 
        {
            cout << "  "; 
        }

        for (int star = 1; star <= line; star++) 
        {
            cout << "* ";
        }

        for (int star = 2; star <= line; star++)  // Put star value = 2 so that it print one less row
        {
            cout << "* ";
        }
        
        cout << endl;
        
    }
    
    return 0;
}


// Inverted Pryamid  +   Inverted Pryamid (- 1 row)  = Odd Number Prymid

//            *                                                    *
//          * *             *                                    * * *
//        * * *             * *                                * * * * *
//      * * * *             * * *                            * * * * * * *
//    * * * * *             * * * *                        * * * * * * * * * 

