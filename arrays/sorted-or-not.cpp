#include <iostream>
using namespace std;

void sortedOrNot(int arr[], int size)
{
    bool isSorted = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {

            isSorted = false;
            break;
        }
    }
    if (isSorted)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int arr[] = {1, 4, 6, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortedOrNot(arr, size);
    return 0;
}