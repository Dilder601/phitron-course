#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, int>> v(n);


    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }


    sort(v.begin(), v.end(), [](pair<string, int>& a, pair<string, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
        });


    for (auto& val : v) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
