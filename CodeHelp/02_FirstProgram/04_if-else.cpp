#include <iostream>
// LEARNING :
// if ((a=3) == b) ----> a = 3
// ----> Yes, we can assign the values in condition block using paranthises ().
using namespace std;
int main()
{
    int a = 2;
    int b = a+1; // b = 3
    
    if ((a=3) == b){ // if (3 == 3) 
        cout << a;   
    }

    else{
        cout << a+8;
    }
    // Output : 3
    
}