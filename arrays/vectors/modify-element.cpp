#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {5, 10, 15};
    v[1] = 20;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}