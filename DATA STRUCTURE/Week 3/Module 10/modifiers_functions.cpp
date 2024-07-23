#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = { 10,20,30,40,50,30,70 };
    // list<int> newList = { 100,200,300 };
    // vector<int> v = { 60,70,80 };
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // myList.push_back(40);
    // myList.push_front(100);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 2), 100);
    // myList.erase(next(myList.begin(), 2));

    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());

    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    // replace(myList.begin(), myList.end(), 30, 20000);

    auto it = find(myList.begin(), myList.end(), 40);

    if (it == myList.end()) {
        cout << "Not Found";
    }
    else {
        cout << "Found";
    }

    // for (int val : myList) {
    //     cout << val << endl;
    // }

    return 0;
}