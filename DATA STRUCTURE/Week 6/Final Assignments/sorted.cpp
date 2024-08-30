#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        vector<int> v;

        for (int i = 0; i < x; ++i) {
            int value;
            cin >> value;
            v.push_back(value);

            int curr_idx = v.size() - 1;

            while (curr_idx != 0) {
                int parent_idx = (curr_idx - 1) / 2;
                if (v[parent_idx] > v[curr_idx])
                    swap(v[parent_idx], v[curr_idx]);
                else
                    break;
                curr_idx = parent_idx;
            }
        }

        sort(v.begin(), v.end());


        int mn = INT_MIN;

        for (int val : v) {
            if (val != mn) {
                cout << val << " ";
                mn = val;
            }
        }
        cout << endl;
    }

    return 0;
}
