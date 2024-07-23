#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool Sort_flag = true;

        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                Sort_flag = false;
                break;
            }
        }

        if (Sort_flag == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
