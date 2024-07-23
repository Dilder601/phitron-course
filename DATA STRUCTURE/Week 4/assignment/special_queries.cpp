#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<string> que;

    int testCase;
    cin >> testCase;
    while (testCase--) {
        int x;
        cin >> x;
        if (x == 0) {
            string name;
            cin >> name;
            que.push(name);
        }
        else {
            if (que.empty()) {
                cout << "Invalid";
            }
            else {
                cout << que.front();
                que.pop();
            }
            cout << endl;
        }
    }
    return 0;
}