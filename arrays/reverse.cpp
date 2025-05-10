#include<iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    for(int i = 0; i < size / 2; i++){
        swap(arr[start], arr[end]);
        start++;
        end--;
        cout << "After swapping " << i + 1 << " times: ";
        for(int j = 0; j < size; j++){
            cout << arr[j] << " "; // Print the array after each swap
        }
    } 
    cout << "Final reversed array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Print the final reversed array
    }

}