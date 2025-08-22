// check if array is sorted 
// input : [40, 50, 60, 80, 90] --> true
// input : [100, 50, 600, 1, 78] --> false

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    int is_sorted = true;

    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]<=arr[i+1]) continue;
        else is_sorted = false;
    }

    return is_sorted;
}

int main(){
    int size = 5;

    int arr1[size] = {40, 50, 60, 80, 90};
    int arr2[size] = {100, 50, 600, 1, 78};

    isSorted(arr1, size) ? cout << "sorted" << endl : cout << "not sorted" << endl;
    isSorted(arr2, size) ? cout << "sorted" << endl : cout << "not sorted" << endl;


    return 0;
}

