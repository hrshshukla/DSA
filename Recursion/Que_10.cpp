// fibonacci series : 0 1 1 2 3 5 8 13 21 
//                            ^
//                           [4]

#include <iostream>
using namespace std;

int fibonacci(int num){
    if (num <= 1) return num;
    
    return fibonacci(num-1) + fibonacci(num-2);
}

int main(){

    // fibonacci number at index [4]
    cout << fibonacci(4) ; // --> Output : 3

    return 0;
}