// number hashing 
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,2,3,2,2,4};


    int hash[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        hash[arr[i]]++;
    }


    int input;
    cout<< "Enter number to get it's occurence : " ;
    cin >> input;
    cout << hash[input] << endl;

    return 0;
}
