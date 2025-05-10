#include<iostream>
using namespace std;

void missingNumber(int arr[], int size, int n){
  int expected_sum = (n * (n + 1)) /2;

  int actual_sum = 0;
  for(int i = 0; i < size; i++){
    actual_sum += arr[i];
  }

  int missing_number = expected_sum - actual_sum;
  cout << "The missing number is " << missing_number << endl;

}
int main(){
    int arr[] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    missingNumber(arr, size, n);
    return 0;
}