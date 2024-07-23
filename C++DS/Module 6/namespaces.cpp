#include<bits/stdc++.h>
using namespace std;

namespace rakib {
    int age = 30;
    void hello() {
        cout << "Hello Rakib";
    }
}

namespace sakib {
    int age2 = 33;
    void hello2() {
        cout << "Sakib Namespace";
    }
}

using namespace rakib;
using namespace sakib;

int main() {
    hello();
    cout << endl;
    cout << age << endl;
    hello2();
    cout << endl;
    cout << age2 << endl;
    return 0;
}