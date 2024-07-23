#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    // vector<int> v(5, 10); // type 3

    // vector<int> v2(5, 1000); // type 4 [copies]
    // vector<int>v(v2); // type 4 [copies]

    int a[4] = { 12,13,14,15 }; //type 5
    vector<int>v(a, a + 4);  //type 5

    // vector<int> v = { 10,2,60 };

    for (int i = 0; i < v.size(); i++) {
        cout << v[3] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}