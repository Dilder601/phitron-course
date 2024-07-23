#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx = INT_MIN;
    int maxIndex, minIndex;
    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > mx) {
            mx = arr[i];
            minIndex = i;
        }
        if (arr[i] < mn) {
            mn = arr[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[minIndex] = mn;
        arr[maxIndex] = mx;
        printf("%d ", arr[i]);

    }

    return 0;
}