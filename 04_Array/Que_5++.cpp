// Optimal Method : Rotate the array to left from "K" place 
// time complexity - O(n)
// space complexity - O(1)

// input : K=3 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [40, 50, 60, 10, 20, 30,]

// input : K=6 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [10, 20, 30, 40, 50, 60] (No change)

// input = K=8 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [30, 40, 50, 60, 10, 20] --> 8 rotation = 6 (no change) + 2 rotation that's why rotated from index 2


#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }   
}

void leftRotate(int arr[], int size, int k){
    k = k % size;
    if (k==0) return;

    // Dry run (given below)
    reverse(arr, 0, k-1); // Reverse first 3 elements → [30, 20, 10, 40, 50, 60]

    reverse(arr, k, size-1); // Reverse last 3 elements → [30, 20, 10, 60, 50, 40]

    reverse(arr, 0, size-1); // Reverse all → [40, 50, 60, 10, 20, 30]
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, size, 3);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;
    
    return 0;
}