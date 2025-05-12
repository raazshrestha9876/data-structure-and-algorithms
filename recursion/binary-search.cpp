//demonstrate binary search using recursion

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>& vec, int target, int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (vec[mid] == target) {
        return mid;
    } else if (vec[mid] < target) {
        return binarySearch(vec, target, mid + 1, end); 
    } else {
        return binarySearch(vec, target, start, mid - 1); 
    }
}

int main() {
    vector<int> vec = {7, 1, 5, 3, 4, 20};
    int target = 20;
    sort(vec.begin(), vec.end()); 
    int start = 0, end = vec.size() - 1;
    int result = binarySearch(vec, target, start, end);
    if (result != -1) {
        cout << "The target element is found at index " << result << endl;
    } else {
        cout << "The target element is not found." << endl;
    }
}
