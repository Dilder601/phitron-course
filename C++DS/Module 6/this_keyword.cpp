#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void hello() {
        cout << "Hello" << endl;
    }
};

int main() {
    Person hasan("Abul Hasan", 30);
    cout << hasan.name << " " << hasan.age << endl;
    return 0;
}