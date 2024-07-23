#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int old_val, new_val, find_val;
    cin >> old_val >> new_val >> find_val;

    // Replace old_val with new_val
    for (int i = 0; i < n; i++) {
        if (v[i] == old_val) {
            v[i] = new_val;
        }
    }

    // Find the index of the first occurrence of find_val
    int find_index = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == find_val) {
            find_index = i;
            break;
        }
    }

    // Print the modified vtor
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Print the index of the first occurrence of find_val
    cout << find_index << endl;

    return 0;
}
