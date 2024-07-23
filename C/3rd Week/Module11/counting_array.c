#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt[7] = { 0 };

    for (int i = 0; i < n; i++) {
        int val = arr[i];
        cnt[val]++;
    }

    for (int i = 0; i <= 6; i++) {
        printf("%d - %d\n", i, cnt[i]);
    }

    return 0;
}