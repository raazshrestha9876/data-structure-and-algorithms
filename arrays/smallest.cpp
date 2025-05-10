
#include<iostream>
#include<climits> 

using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX; // Initialize smallest to the maximum possible integer value

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }

    cout << "The smallest number is: " << smallest << endl;
    return 0;
}