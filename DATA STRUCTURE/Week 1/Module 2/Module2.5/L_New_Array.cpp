#include<bits/stdc++.h>
using namespace std;


//using vector 

int main() {
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    for (int val : v2) {
        cout << val << " ";
    }
    for (int val : v1) {
        cout << val << " ";
    }

    return 0;
}


//using loop

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr1[n];
//     int arr2[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> arr2[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr2[i] << " ";
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr1[i] << " ";
//     }

//     return 0;
// }