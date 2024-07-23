#include<bits/stdc++.h>
using namespace std;

int main() {

    /*string s1 = "hello";
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;
    cout << s1.capacity() << endl;
    cout << s1 << endl;
    s1.clear();
    cout << s1 << endl;
    string a = "hello wirld";
    cout << a << endl;
    if (a.empty() == true) {
        cout << "Empty" << endl;
    }
    else {
        cout << "Not Empty" << endl;
    }
    */
    string a = "Hello";
    cout << a.size() << endl;
    a.resize(10, 'W');
    cout << a.size() << endl;
    cout << a << endl;
    return 0;

}