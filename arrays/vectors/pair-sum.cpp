#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pairSum(vector<int>& num, int k) {
    sort(num.begin(), num.end()); 
    int start = 0;
    int end = num.size() - 1;

    while (start < end) {
        int sum = num[start] + num[end];
        if (sum == k) {
            return true;
        } else if (sum < k) {
            start++;
        } else {
            end--;
        }
    }
    return false;
}

int main() {
    vector<int> vec = {2, 4, 3, 5, 7};
    int k = 9;
    bool hasPairSum = pairSum(vec, k);
    if (hasPairSum) {
        cout << "Yes, there exists a pair with sum " << k << endl;
    } else {
        cout << "No, there is no pair with sum " << k << endl;
    }
    return 0;
}
