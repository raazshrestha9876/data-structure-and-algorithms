// first and last occurence using binary searching

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOcurrence(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int first_occur = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            first_occur = mid;
            end = mid - 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first_occur;
}
int lastOcurrence(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int last_occur = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] == target)
        {
            last_occur = mid;
            start = mid + 1;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last_occur;
}

int main()
{
    vector<int> vec = {1, 3, 3, 3, 5, 7, 9};
    int target = 3;
    sort(vec.begin(), vec.end());
    int first_occur = firstOcurrence(vec, target);
    int last_occur = lastOcurrence(vec, target);
    if (first_occur != -1 && last_occur != -1)
    {
        cout << "First occurrence of " << target << ": index " << first_occur << endl;
        cout << "Last occurrence of " << target << ": index " << last_occur << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}