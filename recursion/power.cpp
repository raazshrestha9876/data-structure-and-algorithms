//Write a recursive function to compute the power of a number (e.g., x^n).

#include<iostream>
using namespace std;

int calcPower(int x, int n){
    if(n == 1){
        return x;
    }
    return x * calcPower(x, n - 1);
}

int main(){
    int x = 3, n = 3;
    int result = calcPower(x, n);
    cout << "The result is " << result << endl;
    return 0;
}