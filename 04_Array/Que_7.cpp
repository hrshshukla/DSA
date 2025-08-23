// move all zeros to the end 
// input =  [2, 3, 0, 4, 0, 0, 1]
// output = [2, 3, 4, 1, 0, 0, 0]


#include <iostream>
using namespace std;

int move(int arr[], int size){
    int j = -1;

    // find the first zero element 
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            j = i;
            break;
        }
    }

    // if no zero element is found return 
    if(j==-1) return j;

    // else start swaping the zero's element with non-zero's
    for (int i = j + 1; i < size; i++)
    {
        if (arr[i]!= 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

}

int main(){
    int arr []= {2, 3, 0, 4, 0, 0, 1, 1};
    int size = sizeof(arr)/ sizeof(arr[0]);

    move(arr, size);

    for (int i = 0; i < size; i++) cout<< arr[i] << " " ;


    return 0;
}