#include<stdio.h> 
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int d1 = (m1 * d) / (m1 + m2);
        int res = (d - d1) / 1;
        printf("%d\n", res);
    }
    return 0;
}


