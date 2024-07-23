#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    bool duplicate = false;

    for (int i = 1; i < n;i++) {
        if (a[i] == a[i - 1]) {
            duplicate = true;
            break;
        }
    }
    if (duplicate == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
