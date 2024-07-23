#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int sum_first_half = 0, sum_second_half = 0;
        for (int i = 0; i < 3; ++i) {
            sum_first_half += str[i] - '0';
            sum_second_half += str[i + 3] - '0';
        }

        if (sum_first_half == sum_second_half) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
