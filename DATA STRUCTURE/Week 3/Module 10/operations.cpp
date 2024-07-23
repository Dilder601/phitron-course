#include<bits/stdc++.h>
using namespace std;

int main() {
    list <int> myList = { 10,20,30,40,50,10,60 };
    // myList.remove(10);

    // myList.sort();
    // myList.sort(greater<>());
    // myList.unique();
    myList.reverse();
    for (int val : myList) {
        cout << val << endl;
    }

    return 0;
}