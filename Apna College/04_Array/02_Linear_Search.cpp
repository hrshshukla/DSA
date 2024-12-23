#include <iostream>
// Searching the Target-Value in every index one-by-one is called linear search 
using namespace std;

int findTarget(int array[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==target){
            return i; // here (i) will return the ---> index value
        }
    }
    return -1; // if target value not found then return -1;
}

int main(){
    int size = 6;
    int array[size] ={2, 81, 76, 3, 18, 9};
    int target_value = 18;

    cout << "Index Value" << " of " << target_value << " is : " << (findTarget(array, size, target_value)) << endl;

    return 0;
}