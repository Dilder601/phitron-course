#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = { 1,2,2,3,4,5,2,3,2,9,2,6 };
    // vector<int>::iterator it;


    // cout << v[v.size() - 1];

    // cout << v.back();

    for (auto it = v.begin(); it < v.end();it++) {
        cout << *it << " ";
    }

    // cout << v[0];
    return 0;
}