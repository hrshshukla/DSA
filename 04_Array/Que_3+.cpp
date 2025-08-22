// There "set" in c++ to store only unique values as we did in JS --> set<int> mySet;
// So question was : Remove duplicate elements from the array  && return how many duplicate elements were there 
// input : {1, 1, 2, 2, 3, 3}
// output :{1, 2, 3, -1, -1, -1}   counter : 6 duplicate element


#include <iostream>
#include <set>
using namespace std;

int rmDuplicates (int arr[], int size){
    int k = 0; 

    for (int i = 1; i < size; i++)
    {
        if(arr[i] != arr[k]){
            k++;
            arr[k]=arr[i];
        }
    }

    // fill remaining indexes with -1
    for (int i = k+1; i < size; i++)
    {
        arr[i] = -1;
    }
    
    return k+1;
}

int main(){
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int length = rmDuplicates(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << "New array length/size : " << length  ;


    return 0;
}