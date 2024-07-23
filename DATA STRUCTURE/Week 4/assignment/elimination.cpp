#include <bits/stdc++.h>
using namespace std;

int main() {

    int testCase;
    cin >> testCase;
    while (testCase--) {
        // input str
        string str;
        cin >> str;
        stack<char> stk;
        for (char ch : str) {
            if (ch == '1') {
                if (stk.empty()) {
                    stk.push(ch);
                }
                else {
                    if (stk.top() == '0') {
                        stk.pop();
                    }
                    else {
                        stk.push(ch);
                    }
                }
            }
            else {
                stk.push(ch);
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