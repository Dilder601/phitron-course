#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int  isPalindrome = 1;
    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != a[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
