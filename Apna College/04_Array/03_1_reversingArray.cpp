#include <iostream>
// Reverse an array without making a copy of it 
// VERSION 1.0 ---> (easy to understand)
// - Apna College Solution

#include <utility> // <--- for swap()
using namespace std;

int reverseArr(int array[], int size){
    int start = 0, end = size-1;

    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
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