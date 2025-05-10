#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end());

    for(int i: v){
        cout << i << " ";
    }
    return 0;
}