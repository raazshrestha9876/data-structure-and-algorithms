#include<iostream>
using namespace std;

int main(){
    int arr[] = { 4, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i; // Update maxIndex if current element is greater
        }
        if(arr[i] < arr[minIndex]){
            minIndex = i; // Update minIndex if current element is smaller
        }
    }
    cout << "Before swapping: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Print the array before swapping
    }

    // Swap max and min elements
    swap(arr[maxIndex], arr[minIndex]);
    cout << "After swapping: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Print the array after swapping
    }

}