#include<bits/stdc++.h>
using namespace std;

void leftSumArray(int arr[], int n) {
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        cout << leftSum << " ";
        leftSum += arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    leftSumArray(arr, n);

    cout << endl;

    return 0;
}



// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int sum = 0;
//     sum = (n * (n + 1)) / 2;
//     cout << sum;
//     return 0;
// }