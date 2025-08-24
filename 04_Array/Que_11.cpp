// Find missing number 
// (My solution) -> Problem : Works only with sorted arrays 
// input : arr = [1, 2, 4, 5, 6]
// output = 3 is missing

#include <iostream>
using namespace std;

int Missing(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i+1) return i+1;
    }
    return -1;
}

int main(){
    int arr []= {1, 2, 4, 5, 6};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << Missing(arr, size) << " is missing";

    return 0;
}