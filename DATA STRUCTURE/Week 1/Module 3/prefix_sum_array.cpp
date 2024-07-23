#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }

    long long pre[n];
    pre[0] = a[0];
    for (int i = 1;i < n;i++) {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--) {
        long long l, h;
        cin >> l >> h;
        long long sum;
        l--;
        h--;
        if (l == 0) sum = pre[h];
        else
            sum = pre[h] - pre[l - 1];

        cout << sum << endl;
    }
    return 0;
}

