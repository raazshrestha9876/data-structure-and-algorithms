#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        bool isDuplicated = false;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicated = true;
            }
        }
        if (isDuplicated)
        {
            continue;
        }
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, size);
    return 0;
}