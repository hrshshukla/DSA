// Optimal Method : Rotate the array to right from "K" place 
// time complexity - O(n)
// space complexity - O(1)

// Input: K = 3, arr = [10, 20, 30, 40, 50, 60]
// Output: [40, 50, 60, 10, 20, 30]

// Input: K = 6, arr = [10, 20, 30, 40, 50, 60]
// Output: [10, 20, 30, 40, 50, 60] (No change)

// Input: K = 8, arr = [10, 20, 30, 40, 50, 60]
// Output: [50, 60, 10, 20, 30, 40]


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
    reverse(arr, 0, size-k-1); // Reverse first 4 elements → [40, 30, 20, 10, 60, 50]
    
    reverse(arr, size-k, size-1); // Reverse last 2 elements → [10, 20, 30, 40, 60, 50]

    reverse(arr, 0, size-1); // Reverse all → [50, 60, 10, 20, 30, 40]
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, size, 2);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;
    
    return 0;
}