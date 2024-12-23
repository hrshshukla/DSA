#include <iostream>
// To Print all the unique values in an array.
using namespace std;

int main(){
    int size = 7;
    int array [size] = {12, 6, 12, 21, 22, 24, 24}; 
    
    for (int i = 0; i < size; i++){
        int counter = 0;

        for (int j = 0; j < size; j++)
        {
            if (array[i]==array[j]) // everytime 1st iteration will make (counter = 1) as array[0] == array[0] is always TRUE 
            {                       // but from  2nd iteration if array[0] == array[anyindex] then (counter++) will make counter = 2
                counter++;          // which means value is repeated and in last (if-else) ---> (counter==1) ---> (2==1) ---> FALSE
                                    // So, if (counter=1) then the value is UNIQUE else value is repeated where (counter > 1)
            }
        }

        if (counter ==1) // Only prints UNIQUE value which gives (counter = 1), if (counter > 1) it is a repeated value
        {
            cout <<" "<< array[i]; 
        }
    }
   
    return 0;
}