#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* rahim = new Student(255, 6, 3.25);
    return rahim;
}

int main() {
    Student* res = fun();
    // cout << res.roll << " " << res.cls << " " << res.gpa << endl;
    cout << res->roll << " " << res->cls << " " << res->gpa << endl;
    delete res;
    return 0;
}