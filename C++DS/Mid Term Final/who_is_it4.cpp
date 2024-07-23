#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int id1, id2, id3;
        char name1[101], name2[101], name3[101];
        char section1, section2, section3;
        int a, b, c;

        cin >> id1 >> name1 >> section1 >> a;
        cin >> id2 >> name2 >> section2 >> b;
        cin >> id3 >> name3 >> section3 >> c;

        if (a >= b && a >= c) {
            cout << id1 << " " << name1 << " " << section1 << " " << a << endl;
        }
        else if (b >= a && b >= c) {
            cout << id2 << " " << name2 << " " << section2 << " " << b << endl;
        }
        else {
            cout << id3 << " " << name3 << " " << section3 << " " << c << endl;
        }

    }

    return 0;
}