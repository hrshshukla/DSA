// My solution : Rotate the array to left from "K" place 
// time complexity - O(n^2)
// space complexity - O(1)

// input : K=3 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [40, 50, 60, 10, 20, 30,]

// input : K=6 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [10, 20, 30, 40, 50, 60] (No change)

// input = K=8 &&  arr=[10, 20, 30, 40, 50, 60]
// output : [30, 40, 50, 60, 10, 20] --> 8 rotation = 6 (no change) + 2 rotation that's why rotated from index 2


#include <iostream>
using namespace std;

void leftRotate(int arr[], int size, int k){
    int rotateTimes = k % size;

    if (k == size ) return;
    
    int i = 0;
    while (i<size-1 && rotateTimes)
    {
        swap(arr[i], arr[i+1]);
        cout << "swapping " << arr[i] << "<->" << arr[i+1] << endl;
        i++;
        
        if (i== size-1) i = 0, rotateTimes--;
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, size, 3);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;
    
    return 0;
}