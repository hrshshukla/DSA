#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, inputBase;
    cout << "Enter Number and it's Base "<< endl;

    cout << " --> Number : ";
    cin >> number;
    const int print_num = number;

    cout << " --> Base of " << number << "  : ";
    cin >> inputBase;

    int OutputBase;
    cout << "Convert "<< number << "of base("<< inputBase <<") into base :";
    cin>>OutputBase;




    int tempNum = number;
    int decimalValue =0;
    for (int power = 0; tempNum > 0; power++)
    {
        tempNum/= 10; // to run the loop according to the number of digits in input 

        int temp_digit = number/int(pow(10, power))%10;
        decimalValue+= temp_digit*int(pow(inputBase,power));
    }
    cout << number<<" of base " << inputBase  << " = "<<decimalValue<< " in decimal" <<endl;


    int final_answer = 0 ;
    int power = 1;
    for (; decimalValue>0;)
    {
        int remainder = (decimalValue % OutputBase);
        decimalValue /= OutputBase;

        final_answer += (remainder * power);
        power*= 10;
        
    }

    cout << "Converted "<<print_num << " of base("<< inputBase <<") into base ("<<OutputBase<<") = "<< final_answer;
    return 0;
}