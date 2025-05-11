//calculate the sum of N natural number

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n - 1);
}

int main(){
    int n = 5;
    cout << "The sum of natural number: " << sum(n) << endl;
    return 0;
}