#include<bits/stdc++.h>
using namespace std;
vector<int> magic(vector<int>& v) {
    vector<int> f(v.size());
    f[0] = v[0];
    for (int i = 0; i < v.size(); i++) {
        f[i] = v[i] + f[i - 1];
    }
    return f;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> final = magic(v);
    for (int i = 0; i < final.size() - 1; i++) {
        cout << final[i] << " ";
    }



    return 0;
}