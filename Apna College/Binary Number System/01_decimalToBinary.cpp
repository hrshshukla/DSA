#include <iostream>
// A code to convert decimal into binary number 
using namespace std;

int main(){
    long long num, base;
    cout << "Enter number :";
    cin>>num;

    cout << "Enter Base :";
    cin>>base;

    const int number = num;

    static int final_answer;
    int power = 1;
    while (num>0)
    {
        int remainder = (num % base);
        num /= base;

        final_answer += (remainder * power);
        power *= 10;
    }
    
    cout << number<<" in base("<<base<<") is : " <<final_answer<< endl;
    return 0;
}