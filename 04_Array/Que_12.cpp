// find maximum consecutive ones 
// input = [1, 0, 1, 1, 1, 0, 1, 1, 0]
// output = 3 

#include <iostream>
using namespace std;

int MaxConsecutive(int arr[], int size){
    int Largest = 0;
    
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1) temp ++;
        
        if (Largest == 0 && temp == 1) Largest = temp;
        
        if(arr[i] == 0 || i == size-1){
            if (temp>Largest) Largest = temp; 
            
            temp = 0;
        }
    }
    return Largest;
}

int main(){
    int arr[] = {1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << MaxConsecutive(arr, size);

    return 0;
}