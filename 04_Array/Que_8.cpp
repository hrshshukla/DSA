// linear search 

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int x){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }

    return -1;
    
}

int main(){
    int arr[] = {10, 20, 90, 80, 40, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << linearSearch(arr, size, 99) << endl;

    // for (int i = 0; i < size; i++) cout<< arr[i] << " ";

    return 0;
}