#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;
    int cnt = 0;

    int x;
    cin >> x;

    while (l <= r) {

        int mid = (l + r) / 2;

        if (a[mid] == x) {
            cnt++;
        }

        if (x > a[mid]) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if (cnt > 1) {
        cout << "true";
    }
    else {
        "false";
    }

    return 0;
}