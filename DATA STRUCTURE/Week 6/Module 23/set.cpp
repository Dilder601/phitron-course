#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        s.insert(x); // o(log n)
    }

    cout << s.count(100) << endl;

    if (s.count(100)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }


    // for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << endl;
    // }

    return 0;
}