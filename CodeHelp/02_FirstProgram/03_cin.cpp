#include <iostream>
// Although I knew this thing but still I will note it down for revision.

// [cin] only reads input data before these :
//            |-> " " space -------------> input : 1 [space] 2  ----> a = 1, b = 2
// ---> cin   |-> " " tab ---------------> input : 1 [tab] 2    ----> a = 1, b = 2
//            |-> [ENTER] new line ------> input : 1 [ENTER] 2  ----> a = 1, b = 2

// But if we want to take full line as input then, we can use ----> cin get()
// LEARNING : getline() ---> treats every value as a "char" while taking input. means ----> "1[space]3" = char ('1' '[space]' '3')---->49 32 51 ASCII
using namespace std;

int main(){
// Multiple values in (int) 
    int a = cin.get(); // if I input values like ---> 1[space]3 then only first letter will be stored as a "char"
                       // means, in 1[space]3 ---> "1" is a "char". So, char '1' = 49 ASCII 
                       // Hence, 49 will be stored 
    cout << "a is : " << a << endl; // Output : 49


// storing [space] in (int)
    int b = cin.get(); // input : [space]
                       // [space] = 32 ASCII
    cout << "b is :" << b << endl; // output : 32

// storing [TAB] in (int)
    int c = cin.get(); // input : [TAB]
                       // [TAB] = 9 ASCII
    cout << "c is :" << c << endl; // output : 9

    return 0;
}