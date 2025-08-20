// (My Solution) reverse an array using recursion 
// input : [2, 6, 4, 8, 9]
// output : [9, 8, 4, 6, 2]

#include <iostream>
using namespace std;

int reverse(int arr[], int n, int i){
    if (i>=n/2) return 0;

    cout << "swapping " << arr[i] << " with " << arr[n-i-1] << endl;
    swap(arr[i], arr[n-i-1]);
    reverse(arr, n, i+1);
}

int main(){
    int arr[]= {2, 6, 4, 8, 9};
    int size = sizeof(arr)/ sizeof(arr[0]);

    reverse(arr, size, 0);

    cout << size << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}