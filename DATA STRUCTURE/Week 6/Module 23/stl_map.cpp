#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    // mp.insert({ "sakib al hasan", 75 });
    // mp.insert({ "tamim iqbal", 69 });
    // mp.insert({ "dilder", 100 });
    // mp.insert({ "rana", 79 });
    // mp.insert({ "akib", 55 });

    mp["sakib al hasan"] = 79;
    mp["tamim"] = 68;
    mp["akib"] = 80;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }


    //o (log n)

    // cout << mp["dilder"] << endl;



    // if (mp.count("rakib")) {
    //     cout << "Ase" << endl;
    // }
    // else {
    //     cout << "Nai" << endl;
    // }

    return 0;
}