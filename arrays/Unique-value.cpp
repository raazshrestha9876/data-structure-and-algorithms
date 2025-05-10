#include <iostream>
using namespace std;

void uniqueValues(int arr[], int size)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << "The unique value is: " << arr[i] << endl;
            found = true;
            break; // Exit after finding the first unique value
        }
    }

    if (!found)
    {
        cout << "No unique value found" << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 4, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    uniqueValues(arr, size);
    return 0;
}
