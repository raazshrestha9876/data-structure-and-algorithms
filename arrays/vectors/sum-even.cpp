#include<iostream>
#include<vector>
using namespace std;

void sumEven(const vector<int>& num){
    int sum = 0;
    for(int val: num){
        if(val % 2 == 0){
            sum += val;
        }
    }
    cout << "The sum of even number is " << sum << endl;
}
int main(){
    vector<int> num = {10, 15, 9, 8, 4, 3};
    sumEven(num);
    return 0;
}