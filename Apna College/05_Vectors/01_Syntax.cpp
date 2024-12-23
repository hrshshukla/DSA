#include <iostream>
#include <vector>

using namespace std;

int main(){
    // VERSION 1.0
    vector<int> vec1 = {1, 2, 3}; // | 1 | 2 | 3 |

    // VERSION 2.0
    vector<int> vec1(3,5); // ---->  | 5 | 5 | 5 |

    return 0;
}