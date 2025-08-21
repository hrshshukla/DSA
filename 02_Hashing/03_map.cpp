#include <iostream>
// #include <map>   //--> tree like operation  
#include <unordered_map> // --> Hashtable like operation
using namespace std;

int main(){
    // array of random values 
    int arr[10] = {1,2,3,4,2,3,2,2,4,10};

    // map storing occurence of each value 
    // map<int, int> myMap; //  -->  insertion/deletion/fetching : O(log n)
    unordered_map<int, int> myMap; // -->  insertion/deletion/fetching : O(1)
    for (int i = 0; i < 10; i++)
    {
        myMap[arr[i]]++;
    }
    
    // Asking user which value's occurence they want to know
    int input;
    cout<< "Enter number to get it's occurence : " ;
    cin >> input;
    cout << myMap[input] << endl;

    // (#) How to iterate in map 
    for (auto iterator : myMap)
    {
        cout <<iterator.first << "->" << iterator.second << endl;
        //      [key]             ->        value
    }
    


    return 0;
}