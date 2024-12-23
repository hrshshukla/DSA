#include <iostream>
// print intersection of 2 arrays.
// means print the common numbers in two arrays 
// similar to printing UNIQUE values

// Array 1: [20, 13, 82, 22, 46]
// Array 2: [32, 43, 22, 12, 20]
// Output: [20 22]
using namespace std;

int main(){
    int size = 5;
    int array1[size] = {20, 13, 82, 22, 46}; 
    int array2[size] = {32, 43, 22, 12, 20}; 
    
    for (int i = 0; i < size; i++){
        int counter = 0;

        for (int j = 0; j < size; j++){
            if (array1[i] == array2[j]) { // comparing each value of (array1) with each value of (array2)
                counter++;  // <---- if any common value found then (counter++)
            }
        }

        if (counter == 1) {
            cout << array1[i]<< " " ; // Ouput : 20 22
        }
    }

    return 0;
}