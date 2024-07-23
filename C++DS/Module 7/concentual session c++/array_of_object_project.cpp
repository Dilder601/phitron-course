#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    int bang;
    int eng;
    int math;

    int total;
    double avg;
    string gpa;
    int roll;

};

bool cmp(Student a, Student b) {
    if (a.total > b.total) {
        return true;
    }
    else if (a.total < b.total) {
        return false;
    }
    else {
        if (a.id < b.id) {
            return true;
        }
        else {
            return false;
        }
    }
}


int main() {
    int t;
    cin >> t;

    Student st[t];

    for (int i = 0; i < t; i++) {
        cin >> st[i].id >> st[i].name >> st[i].bang >> st[i].eng >> st[i].math;

        st[i].total = st[i].bang + st[i].eng + st[i].math;
        st[i].avg = (double)st[i].total / 3;
        if (st[i].avg >= 80) {
            st[i].gpa = "A+";
        }
        else if (st[i].avg >= 70) {
            st[i].gpa = "A";
        }
        else if (st[i].avg >= 60) {
            st[i].gpa = "A-";
        }
        else if (st[i].avg >= 50) {
            st[i].gpa = "B";
        }
        else if (st[i].avg >= 40) {
            st[i].gpa = "C";
        }
        else {
            st[i].gpa = "F";
        }
    }
    sort(st, st + t, cmp);

    /*cout << "Roll\tID\tName\tBang\tEng\tMath\tTotal\tAvg\tGpa";*/

    for (int i = 0; i < t; i++) {
        cout << i + 1 << " " << st[i].id << " " << st[i].name << " " << st[i].bang << " " << st[i].eng << " " << st[i].math << " " << st[i].total << " " << st[i].avg << " " << st[i].gpa << endl;
    }



    return 0;
}