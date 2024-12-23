#include <iostream>

using namespace std;

int main(){
    int a = 0; // Here, a = 0 means ---> a = FALSE
    cout << !a  << endl; // Then !a = TRUE ----> a = 1

    a = 23; // Here, a = 23 ---> any non-zero value is TRUE means ---> a = TRUE
    cout << !a  << endl; // Then !a = FALSE ----> a = 0
    return 0;
}