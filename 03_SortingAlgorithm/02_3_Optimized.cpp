#include <iostream>
using namespace std;

int sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j >= 1 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int size = 6;
    int arr[size] = {85, 12, 59, 45, 72, 51};

    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}