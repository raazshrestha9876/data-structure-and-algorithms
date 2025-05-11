//check if the array is sorted or not

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 0)
    {
        return true;
    }
    if (arr[n - 2] > arr[n - 1])
        return false;

    return isSorted(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n))
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
    return 0;
}