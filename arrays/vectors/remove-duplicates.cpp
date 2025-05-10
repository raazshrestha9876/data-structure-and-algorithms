#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

void removeDuplicates(vector<int>& num) {
    // Sort the original vector in-place
    sort(num.begin(), num.end());

    vector<int> uniqueVec;

    // Add the first element to uniqueVec
    if (!num.empty()) {
        uniqueVec.push_back(num[0]);
    }

    // Loop through the rest of the vector
    for (int i = 1; i < num.size(); i++) {
        if (num[i] != num[i - 1]) {
            uniqueVec.push_back(num[i]);
        }
    }

    // Display the result
    cout << "After removing duplicate elements:" << endl;
    for (int val : uniqueVec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> num = {10, 5, 4, 5, 3, 4, 3};
    removeDuplicates(num);
    return 0;
}
