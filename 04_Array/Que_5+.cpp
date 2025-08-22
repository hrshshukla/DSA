// Brute Method : Rotate the array to left from "K" place 
// time complexity - O(n)
// space complexity - O(n)

// input : K=3 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [40, 50, 60, 10, 20, 30,]

// input : K=6 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [10, 20, 30, 40, 50, 60] (No change)

// input = K=8 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [30, 40, 50, 60, 10, 20] --> 8 rotation = 6 (no change) + 2 rotation that's why rotated from index 2


#include <iostream>
using namespace std;

void leftRotate(int arr[], int size, int k){
    k = k % size;

    int tempArr[k];

    // (1) Store right elements in tempArr
    for (int i = 0; i < k; i++)
    {
        tempArr[i] = arr[i];
    }

    // (2) Shift elements from right  to left
    for (int i = k; i < size; i++)
    {
        arr[i - k] = arr[i];
    }
    
    // (3) putting back the stored values in the last 
    for (int i = size - k; i < size ; i++) 
    {
        arr[i] = tempArr[i - (size-k)];
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, size, 3);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;
    
    return 0;
}