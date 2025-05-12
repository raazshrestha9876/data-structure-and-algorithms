#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start; int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + start] = temp[idx];
    }
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        // left side
        mergeSort(arr, start, mid);
        // right side
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}
void printArray(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {4, 1, 5, 3, 2};
    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    cout << "after sorting: ";
    printArray(arr);

    return 0;
}