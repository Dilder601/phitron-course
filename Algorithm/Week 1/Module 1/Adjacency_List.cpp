#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // for (int i = 0; i < v[0]; i++) {
    //     cout << v.
    // }

    vector<int> vv;

    for (int x : v[0]) {
        cout << x << " ";
    }

    return 0;
}
