// Intersection of an array
// input : arr1 = [1, 2, 2, 3, 3, 4, 5, 6] && arr2 = [2, 3, 3, 5, 6, 6, 7]
// output : intrsct = [2, 3, 3, 5, 6]

#include <iostream>
#include <vector>
using namespace std;

vector<int> Intersection(vector<int> arr1, vector<int> arr2)
{
    vector<int> intersection;
    
    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size())
    {   
        if (arr1[i] < arr2[j])i++;
        if (arr1[i] > arr2[j]) j++;

        else{
            intersection.push_back(arr1[i]);
            i++, j++;
        }
    }

    return intersection;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6, 6, 7};
    // output : intrsct = [2, 3, 3, 5, 6]

    vector <int> result = Intersection(arr1, arr2);

    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    

    return 0;
}