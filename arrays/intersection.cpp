#include <iostream>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection of the arrays: ";
    for (int i = 0; i < size1; i++)
    {
        // Check if arr1[i] is already printed
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted) continue;

        // Check if arr1[i] is present in arr2
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 3, 5, 2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}
