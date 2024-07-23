#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b) {
    if (a.eng > b.eng) {
        return true;
    }
    else if (a.eng < b.eng) {
        return false;
    }
    else {
        if (a.math > b.math) {
            return true;
        }
        else if (a.math < b.math) {
            return false;
        }
        else {
            // if (a.id < b.id) {
            //     return true;
            // }
            return a.id < b.id;
        }
    }
}

int main() {
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++) {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math >> st[i].eng;

    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math << " " << st[i].eng << endl;
    }


    return 0;
}