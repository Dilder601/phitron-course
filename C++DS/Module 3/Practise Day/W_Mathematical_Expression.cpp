#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    char s1, s2;
    cin >> a >> s1 >> b >> s2 >> c;

    if (a + b == c) {
        cout << "Yes" << endl;
    }
    else if (a - b == c) {
        cout << "Yes" << endl;
    }
    else if (a * b == c) {
        cout << "Yes" << endl;
    }
    else {
        if (s1 == '+') {
            int res = a + b;
            cout << res << endl;
        }
        else if (s1 == '-') {
            int res = a - b;
            cout << res << endl;
        }
        else if (s1 == '*') {
            int res = a * b;
            cout << res << endl;
        }
    }

    return 0;
}