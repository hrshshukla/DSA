#include <iostream>
// Sum of all numbers from 1 to N which are divisible by 3.

// Solution : inside the loop we will not check each number we will check every 3rd number 
//          : instaed of doing (i++) maine (i+= 3)
//          : like 0..3..6..9..10
using namespace std;

int main(){
    int num;
    cout << "Enter a No. : " << endl;
    cin>> num;

    static int sum;

    for (int i = 0; i <= num; i+= 3) // instaed of doing (i++) maine (i+= 3) 
    {   
        if (i%3==0)
        {
             sum += i;
        }
    }

    cout << "The sum is : " << sum << endl;
    
    return 0;


}