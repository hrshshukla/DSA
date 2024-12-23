#include <iostream>
#include <vector>

// .___________.
// | 1 | 2 | 3 | 
// -------------
//       | (x2)
//       v
// .____________________.
// | 1 | 2 | 3 |  |  |  |
// ----------------------

using namespace std;

int main(){
    vector<int> emptyVector;   //  ._________.
    //                         //  |  empty  |
    //                         //  -----------

    emptyVector.push_back(20); //  .____.
    //                         //  | 20 |
    //                         //  ------
    // Output: Size: 1, Capacity: 1

    emptyVector.push_back(40); //   ._________.
    //                         //   | 20 | 40 | <----- Capacity doubles to 2 (1x2)
    //                         //   -----------
    // Size: 2, Capacity: 2

    emptyVector.push_back(60); //  .__________________.
    //                         //  | 20 | 40 | 60 |   | <---- Capacity doubles to 4 (2x2)
    //                         //  --------------------
    // Output: Size: 3, Capacity: 4

    emptyVector.push_back(80); //  .__________________.
    //                         //  | 20 | 40 | 60 | 80 | <---- All slots filled, Capacity remains 4
    //                         //  --------------------
    // Output: Size: 4, Capacity: 4

    emptyVector.push_back(100); //  ._____________________________________.
    //                          //  | 20 | 40 | 60 | 80 | 100 |   |   |   | <---- Capacity doubles to 8 (4x2)
    //                          //  ---------------------------------------
    // Output: Size: 5, Capacity: 8
    return 0;
}