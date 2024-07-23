#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;
    // s += t;
    // s.append(t);
    /*
    s.push_back('M');
    s.pop_back();
    cout << s << endl;*/

    // modifier 2
    s = "HelloWorld";
    // s.assign("Making");
    // s.erase(1, 1);
    //s.replace(1, 1, "o"); // its like erase + replace
    s.insert(5, "Mithu");
    cout << s << endl;


    return 0;
}