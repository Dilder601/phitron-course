#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int l, h;
        cin >> l >> h;
        int sum = 0;
        l--;
        h--;
        for (int i = l; i <= h;i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}