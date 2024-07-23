#include<bits/stdc++.h>
using namespace std;

int* fun() {
    int* a = new int;
    cout << "Fun: " << a << endl;
    *a = 100;
    return a;
}


int main() {

    int* p = fun();
    cout << "main: " << *p << endl;

    /*
//heap or dynamic memory

// declare pointers
//int* a = new int;
// *a = 10;
 // derefarance value of *a
 //cout << *a << endl;*/

    return 0;
}