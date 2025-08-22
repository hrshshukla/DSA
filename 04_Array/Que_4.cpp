// Rotate the array to left by one element 
// input : [10, 20, 30, 40]
// output : [20, 30, 40, 10]

#include <iostream>
using namespace std;

void leftRotate(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, size);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;
    
    return 0;
}