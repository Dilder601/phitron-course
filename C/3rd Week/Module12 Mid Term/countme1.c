#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int twoCount = 0, threeCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            twoCount++;
        }
        else {
            if (arr[i] % 3 == 0) {
                threeCount++;
            }
        }
    }
    printf("%d %d", twoCount, threeCount);
    return 0;
}
