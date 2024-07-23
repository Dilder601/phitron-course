#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    int roll;
    int cls;
    double cgpa;
    //constructor
    Student(int roll, int cls, double cgpa) {

        /*(*this).roll = roll;
        (*this).cls = cls;
        (*this).cgpa = cgpa;*/

        //dereference with access pointer

        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

int main() {

    Student rahim(1, 9, 5.01);
    Student karim(7, 10, 4.25);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.cgpa << endl;

    return 0;
}