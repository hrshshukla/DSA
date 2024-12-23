#include <iostream>
#include <climits>
#include <utility>

// swap the max & min value of an array.
using namespace std;
int MinMax_and_reverse(int* array, int size){ 
    int min_value = INT_MAX;
    int max_value = INT_MIN;
    int min_index = 0;
    int max_index = 0;

   
    for (int i = 0; i < size; i++)
    {
        if (array[i]<min_value){ // find minimum value in array and it's index
            min_value = array[i];
            min_index = i;
        }

        if (array[i]>max_value){ //// find maximun value in array and it's index
            max_value = array[i];
            max_index = i;
        } 
    }

        swap(array[min_index],array[max_index]); // swaping minimum value using its index with maximum value and vice versa
}


int main(){
    int size = 4;
    int array[size] = {12, 34, 1, 67};

    MinMax_and_reverse(array,size);
    
    for (int i = 0; i < size; i++){
        cout << array[i]<< " ";
    }

    return 0;
}