// Parameterised and Functional Recursion
// input = 4
// output = 10

#include <iostream>
using namespace std;

int add(int num, int sum){
    if (num < 1) return sum;

    add(num-1, sum + num); // add (3, 4)
}

int main(){
    int num = 4;

    cout << add(num, 0) << endl; // initially sum = 0

    return 0;
}