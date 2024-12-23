#include <iostream>
#include <cmath>
using namespace std;
// This Calculator can take any number of any (base) and perform operation and able to return ouput in any (base)
// Project [Github Link] in description 

int base_calculator(int arr_num[], int arr_base[], char oprtr, int size, int outputBase)
{

    int convertedDecimalValue = 0;
    int final_decimal = 0;

    // convert num array into decimal
    for (int counter = 0; counter < size; counter++)
    {
        int number = arr_num[counter], inputBase = arr_base[counter];

        int tempNum = number;
        convertedDecimalValue = 0;
        for (int power = 0; tempNum > 0; power++)
        {
            tempNum /= 10;

            int temp_digit = number / int(pow(10, power)) % 10;
            convertedDecimalValue += temp_digit * int(pow(inputBase, power));
        }
        arr_num[counter] = convertedDecimalValue;
    }

    // Perform Operation
    switch (oprtr)
    {
    case '+':
        final_decimal = (arr_num[0] + arr_num[1]);
        break;

    case '-':
        final_decimal = (arr_num[0] - arr_num[1]);
        break;

    case '*':
        final_decimal = (arr_num[0] * arr_num[1]);
        break;

    case '/':
        final_decimal = (arr_num[0] / arr_num[1]);
        break;

    default:
        cout << " Please enter valid operator" << endl;
        break;
    }

    // Print Final answer in Demanded base
    int final_answer = 0;
    int power = 1;
    while (final_decimal > 0)
    {
        int remainder = (final_decimal % outputBase);
        final_decimal /= outputBase;

        final_answer += (remainder * power);
        power *= 10;
    }
    cout << arr_num[0] << " of base (" << arr_base[0] 
         << ") " << oprtr << " " << arr_num[1] 
         << " of base (" << arr_base[1] << ") = " 
         << final_answer << " of base (" << outputBase << ")" << endl;
}

int main()
{
    int arr_num[2], arr_base[2], outputBase;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Num " << i + 1 << " : ";
        cin >> arr_num[i];

        cout << "---> Base of (" << arr_num[i] << ") : ";
        cin >> arr_base[i];
    }

    char oprtr;
    cout << "Select Operation ( + - / x ) : ";
    cin >> oprtr;

    cout << "Select base final number :";
    cin >> outputBase;

    int size = sizeof(arr_num) / sizeof(arr_num[0]);
    base_calculator(arr_num, arr_base, oprtr, size, outputBase);

    return 0;
}