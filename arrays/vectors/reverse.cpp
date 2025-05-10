#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& num)
{
    int start = 0;
    int end = num.size() - 1;
    for (int i = 0; i < num.size() / 2; i++)
    {
        swap(num[start], num[end]);
        start++;
        end--;
    }
    cout << "After reversing: " << endl;
    for (int val : num)
    {
       
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> num = {10, 2, 8, 5, 7, 4};
    reverse(num);
    return 0;
}
