// remove duplicates from the array  && return the lenght of new array 
// input : {1, 1, 2, 2, 3, 3}
// output :{1, 2, 3, -1, -1, -1}   && length = 

#include <iostream>
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