//calculate the factorial number 

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n = 5;
    cout << "The factorial number: " << fact(n) << endl;
    return 0;
}