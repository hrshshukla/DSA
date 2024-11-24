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
        for (int space = line; space <= linesDemanded; space++) // Space ko Decreasing order me print krna hai mtlb ( line++ = space-- ) opposte relation me intialization 
        {
            cout << "  "; 
        }

        for (int star = 1; star <= line; star++) // Stars ko Increasing order me print krna hai mtlb (lines++ = stars++) condition
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
    return 0;
}



//             * 
//           * *
//         * * *
//       * * * *
//     * * * * *