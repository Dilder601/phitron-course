#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCases;
    cin >> testCases;
    while (testCases--) {
        string str;
        cin >> str;
        stack<char> stk;
        for (char ch : str) {
            if (ch == '0') {
                if (!stk.empty() && stk.top() == '1') {
                    stk.pop();
                }
                else {
                    stk.push(ch);
                }
            }
            if (ch == '1') {
                if (!stk.empty() && stk.top() == '0') {
                    stk.pop();
                }
                else {
                    stk.push(ch);
                }
            }
        }
        if (stk.empty()) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}