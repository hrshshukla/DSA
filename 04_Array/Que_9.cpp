// My solution create union array from 2 sorted arrays 


#include <iostream>
#include <vector>
using namespace std;

vector<int> getUnion(vector<int> arr1, vector<int> arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();

    int k = 0; // pointer for arr1
    int j = 0; // pointer for arr2

    vector<int> Union;

    while (k < size1 && j < size2)
    {
        if (arr1[k] < arr2[j])
        {
            if (Union.empty() || arr1[k] != Union.back())
            {
                Union.push_back(arr1[k]);
            }

            k++;
        }

        else if (arr1[k] == arr2[j])
        {
            if ((Union.empty() || arr1[k] != Union.back()))
            {
                Union.push_back(arr1[k]);
            }

            k++, j++;
        }

        else if (arr2[j] < arr1[k]){
            if ((Union.empty() || arr2[j] != Union.back()))
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }

    // Add leftovers from arr1
    while (k < size1)
    {
        if (arr1[k] != Union.back()){
            Union.push_back(arr1[k]);
        }

        k++;
    }

    // Add leftovers from arr2
    while (j < size2)
    {
        if (arr2[j] != Union.back()){
            Union.push_back(arr2[j]);
        }

        j++;
    }

    return Union;
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 5, 6};
    vector<int> arr2 = {3, 3, 4, 6, 7};
    // Ouput  {1, 2, 3, 4, 5, 6};

    int size1 = arr1.size();
    int size2 = arr2.size();

    vector<int> arrFinal = getUnion(arr1, arr2);

    for (int i = 0; i < arrFinal.size(); i++)
        cout << arrFinal[i] << " ";

    return 0;
}