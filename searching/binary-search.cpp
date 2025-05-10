//demonstrating binary search algorithm

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int binarySearch(const vector<int>& vec, int target) {

    int start = 0;
    int end = vec.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(vec[mid] == target){
            return mid;
        }else if(vec[mid] < target){
            start = vec[mid] + 1;
        }else{
            end = vec[mid] -1;
        }
    }
    return -1;
}

int main() {
    vector<int> vec = {1, 10, 5, 7, 3, 12, 11};
    int target = 7;
    sort(vec.begin(), vec.end());
    int result = binarySearch(vec, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
