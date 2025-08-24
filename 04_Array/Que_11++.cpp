// Find missing number 
// -> Works with big numbers like 10⁵ and sorted + unsorted arrays,
// input : arr = [1, 2, 4, 5, 6]
// output = 3 is missing

#include <iostream>
using namespace std;

int Missing(int arr[], int size){
    int sum = (arr[size-1] * (arr[size-1]+1) )/2;  // --> (n * n+1) / 2

    int currSum = 0;
    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];
    }

    return sum - currSum;
}

int main(){
    int arr []= {1, 2, 4, 5, 6};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << Missing(arr, size) << " is missing";

    return 0;
}