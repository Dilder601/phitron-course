#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    while (n--) {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w == h) {
            printf("Square\n");
        }
        else {
            printf("Rectangle\n");
        }
    }

    return 0;
}