#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    if (m != n) {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> s;
    queue<int> q;

    int val;


    for (int i = 0; i < m; i++) {
        cin >> val;
        s.push(val);
    }


    for (int i = 0; i < n; i++) {
        cin >> val;
        q.push(val);
    }

    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            cout << "NO" << endl;
            return 0;
        }

        s.pop();
        q.pop();
    }


    cout << "YES" << endl;

    return 0;
}

