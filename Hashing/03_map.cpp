#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,2,3,2,2,4,10};

    map<int, int> myMap;
    for (int i = 0; i < 10; i++)
    {
        myMap[arr[i]]++;
    }
    
    
    int input;
    cout<< "Enter number to get it's occurence : " ;
    cin >> input;
    cout << myMap[input] << endl;

    return 0;
}