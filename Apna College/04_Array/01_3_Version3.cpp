#include <iostream>
#include <algorithm> 
//Find smallest/ largest value in Array
// Answer = VERSION 3.0

// Learning :
// ------> min_element and max_elemnt function
// ------>           diffrence in index = ( & of index[2] - & of index[1]) / sizeof(datatype)
// ------> Example : diffrence in index = ( & array[4]    - & array[0])    / sizeof(array[0])  = (1016 - 1000) / 4  = (16/4) = 4th index
using namespace std;

int main() {
    int array[] = {12, 1, 78, 3, 99, 81};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    // pointers to the minimum and maximum elements
    // NOTE : address of array[0] may look like (1000), then &array[1] = (1004)
    auto min_ptr = min_element(array, array + sizeOfArray); // this will point -> address of index [1]. this address may look like : 1004
    auto max_ptr = max_element(array, array + sizeOfArray); // this will point -> address of index [4]. this address may look like : 1016

    // Calculate indices by subtracting the base pointer
    // NOTE : here array = &array[0]
    int min_index = min_ptr - array; // min index = &array[1] - &array[0] = (1004 - 1000) / 4 = (4/4) = 1
    int max_index = max_ptr - array; // max_index = &array[4] - &array[0] = (1016 - 1000) / 4 = (16/4) = 4

    cout << "Max value is : " << *max_ptr << " at index " << max_index << endl;
    cout << "Min value is : " << *min_ptr << " at index " << min_index << endl;

    return 0;
}
// Explanation 

// Index:     0        1        2        3        4        5
// Value:    12        1       78        3       99       81
// Address: 1000     1004     1008     1012     1016     1020

// 
