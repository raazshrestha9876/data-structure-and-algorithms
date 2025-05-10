#include<iostream>
#include<utility> // for std::pair
using namespace std;

pair<int, int> sumAndProduct(int arr[], int size) {
    int sum = 0;
    int product = 1;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i]; 
    }
    return make_pair(sum, product);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> result = sumAndProduct(arr, size);
    cout << "Sum: " << result.first << endl;
    cout << "Product: " << result.second << endl;

    return 0;
}
