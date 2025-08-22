// find second largest element in array
// input : [40, 50, 60, 80, 90, 10, 20, 30]
// output : 80

#include <iostream>
using namespace std;

int secLargest(int arr[], int size){
    int secondLargest = arr[0];
    int Largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > Largest)
        {
            secondLargest= Largest;
            Largest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int size= 8;
    int arr[size] = {10, 10, 20};

    
    cout << secLargest(arr, size) << endl;
    return 0;
}