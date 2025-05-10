#include <iostream>
#include <vector>
#include <climits>  // for INT_MIN and INT_MAX
using namespace std;

void maxAndMin(const vector<int>& num) {
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int val : num) {
        if (val > maxVal) {
            maxVal = val;
        }
        if (val < minVal) {
            minVal = val;
        }
    }

    cout << "The maximum value is " << maxVal << endl;
    cout << "The minimum value is " << minVal << endl;
}

int main() {
    vector<int> num = {10, 2, 8, 5, 7, 4};
    maxAndMin(num);
    return 0;
}
