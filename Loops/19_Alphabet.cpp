#include <iostream>

using namespace std;

int main(){
    int inputDemand;    
    cout << "Enter : "; cin>>inputDemand;
    char linesDemanded = 'A'+(inputDemand-1); // D 


    for (char line = 0; line <= inputDemand; line++)
    {
        for (char number = line-1; number >=0; number--) 
        {
            cout << char(linesDemanded-number) <<" ";
        }
        cout << endl;
    }

    return 0;
}


// Triangle 
// E
// D E
// C D E
// B C D E
// A B C D E