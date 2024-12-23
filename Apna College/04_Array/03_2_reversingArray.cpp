#include <iostream>
// Reverse an array without making a copy of it 
// VERSION 2.0 ---> (better concept)
// - Solution by harsh 

#include <utility> // <--- for swap()
using namespace std;

int reverseArr(int* array, int size){ // Using pass by reference
    for (int i = 0; i < (size/2); i++)
    {
        swap(array[i],array[(size-1)-i]); // (size-1)= last index of array, and (-i) will decrease the value from index same as it is increase the value from start index 
        // array[i] is like array[start]++    |  array[(size-1)-i] is like array[end]--
    }
}

int main(){
    int size = 6;
    int array[size] ={2, 81, 76, 3, 18, 9};

    reverseArr(array,size);

    for (int i = 0; i < size; i++){
        cout << array[i]<< " ";
    }

    return 0;
}