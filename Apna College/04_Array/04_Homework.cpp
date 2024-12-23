#include <iostream>
//calculate sum & product of all numbers in an array.

using namespace std;

int main(){
    int size = 2;
    int array[size] = {100, 200, 700};
    int sum = 0;

    for (int i = 0; i <= size; i++)
    {
        sum += array[i];
    }
    
    cout << "Sum : " << sum << endl;
    return 0;
}