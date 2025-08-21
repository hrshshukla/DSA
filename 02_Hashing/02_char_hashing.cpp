// character hashing
// find occurence of "a" in

#include <iostream>
using namespace std;

int main()
{
    string name = "harsh";

    int hash[26] = {0};
    for (int i = 0; i < name.size(); i++)
    {
        hash[name[i]-'a']++;
    }

    char input;
    cout << "Enter letter to get it's occurence : ";
    cin >> input;
    cout << hash[input-'a'] << endl;
    

    return 0;
}