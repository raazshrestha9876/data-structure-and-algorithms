#include<iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "Inside changeArr function" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i]; // Double each element
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    changeArr(arr, 5); // Pass the array to the function
    cout << "After changeArr function" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // Print the modified array
    }
    cout << endl;
    return 0;
}