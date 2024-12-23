#include <iostream>
using namespace std;

int main()
{
    int inputDemand = 5; // Input value

    for (int line = 1; line <= inputDemand; line++)
    {
        char linesDemanded = 'A'+ (inputDemand-line); // Determine the starting character for the row
        for (int number = 1; number <= line; number++)
        {
            cout << char(linesDemanded + number) << " ";
        }
        cout << endl;
    }

    return 0;
}
