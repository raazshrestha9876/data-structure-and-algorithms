#include<iostream>
#include<climits> // Required for INT_MIN

using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int largest = INT_MIN; // Initialize to the smallest possible integer

    for(int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}

