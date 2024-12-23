#include <iostream>
#include <climits>
//Find smallest/ largest value in Array
// Answer = VERSION 1.0

using namespace std;

int main(){
    int array[]={12, 1, 78, 3, 99, 81};
    int min_value = INT_MAX;
    int max_value = INT_MIN;
    int sizeOfArray = sizeof(array)/sizeof(array[0]);

    int min_index=0;
    int max_index=0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (array[i]<min_value){
            min_value = array[i];
            min_index = i;
        }

        else if (array[i]>max_value){
            max_value = array[i];
            max_index = i;
        } 
    }

    cout << "Max value is : " << max_value << " at index " << max_index<< endl;
    cout << "Min value is : " << min_value << " at index " << min_index<<endl;
    
    return 0;
}