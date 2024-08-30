#include <bits/stdc++.h>
using namespace std;


struct Student {
    string name;
    int age;
    int marks;

    Student(string n, int a, int m) {
        this->marks = m;
        this->age = a;
        this->name = n;
    }
};


class cmp {
public:
    bool operator()(Student a, Student b) {
        if (a.marks == b.marks) {
            return a.age > b.age;
        }
        return a.marks < b.marks;
    }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        pq.push(Student(name, age, marks));
    }

    int q;
    cin >> q;

    while (q--) {
        int c;
        cin >> c;
        if (c == 0) {
            string name;
            int age, marks;
            cin >> name >> age >> marks;
            pq.push(Student(name, age, marks));
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.age << " " << topStudent.marks << endl;
            }
        }
        else if (c == 1) {
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.age << " " << topStudent.marks << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.age << " " << topStudent.marks << endl;
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
