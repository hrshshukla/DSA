#include <iostream>
#include <vector>
// vector.size()
// vector.capacity()  <---- interesting concept next file (03_SizeAndCapacity)
// vector.push_back()
// vector.pop_back()
using namespace std;

int main(){

// Size of vector
    vector<int> vec1 = {1, 2, 3}; 
    vec1.size(); // Output : 3

// capacity
    vector<int> emptyVector;
    emptyVector.push_back(20); 
    cout << "Size : " << emptyVector.size() << " Capacity : " << emptyVector.capacity()  << endl; // | 20 | 

    emptyVector.push_back(40); // now it will try to put (40) inside --->  | 20 |  but because there is NO Space, It will multiply size by (x2) 
    cout << "Size : " << emptyVector.size() << " Capacity : " << emptyVector.capacity()  << endl; // | 20 | 40 | 


    emptyVector.push_back(60);// now it will try to put (60) inside --->  | 20 |  40 |  but there is Not enough Space, so size multiply by (x2) 
    cout << "Size : " << emptyVector.size() << " Capacity : " << emptyVector.capacity()  << endl; // | 20 | 40 | 60 |  | 


// Pop Back 
    emptyVector.pop_back(); 
    cout << "Pop Back : ";
    for (int i : emptyVector) {cout << i << " ";} // Output : 20 40 
    cout << endl;

// Front
    cout << "Front : ";
    cout << emptyVector.front();

    return 0;
}

// .___________.
// | 1 | 2 | 3 | 
// -------------
//       | (x2)
//       v
// .____________________.
// | 1 | 2 | 3 |  |  |  |
// ----------------------