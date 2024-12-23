#include <iostream>
#include <climits>
//Find smallest/ largest value in Array
// Answer = VERSION 2.0

// Learning :
// ------> min and max function 

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
            min_value= min(array[i],min_value);
            // min_index = i;

            max_value = max(array[i],max_value);
            // max_index = i;
    }

    cout << "Max value is : " << max_value;
    cout << endl<< "Min value is : " << min_value <<endl;
    
    
    return 0;
}