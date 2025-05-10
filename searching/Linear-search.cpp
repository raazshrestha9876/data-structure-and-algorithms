//demonstrating linear search alogrithm

#include <iostream>
#include <vector>

using namespace std;

void linearSearch(const vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            cout << "The element " << target << " is found at position " << i << endl;
            return;
        }
    }
    cout << "The element " << target << " is not found" << endl;
}

int main() {
    vector<int> vec = {1, 10, 5, 7, 3};
    int target = 7;
    linearSearch(vec, target);
    return 0;
}
