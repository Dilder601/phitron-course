#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }

    while (q--) {
        int c;
        cin >> c;

        if (c == 0) {
            int x;
            cin >> x;
            pq.push(x);

            if (!pq.empty()) {
                cout << pq.top() << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (c == 1) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    cout << pq.top() << endl;
                }
                else {
                    cout << "Empty" << endl;
                }
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}