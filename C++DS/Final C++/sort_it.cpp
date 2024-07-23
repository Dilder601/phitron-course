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

    int total;
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
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++) {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math >> st[i].eng;
        st[i].total = st[i].math + st[i].eng;
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math << " " << st[i].eng << endl;
    }


    return 0;
}