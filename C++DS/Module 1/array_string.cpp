#include<iostream>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;

int main() {

    char s[100];
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << a << endl;
    cout << s;
    return 0;
}