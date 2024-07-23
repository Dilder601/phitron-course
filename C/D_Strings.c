#include<stdio.h>
#include<string.h>
int main() {
    char n[11];
    scanf("%s", n);
    int x = strlen(n);
    printf("%d ", x);
    char m[11];
    scanf("%s", m);
    int y = strlen(m);
    printf("%d\n", y);

    char ans[x + y];

    for (int i = 0; i < x; i++) {
        ans[i] = n[i];
    }

    int i = x;
    for (int j = 0; j < y; j++) {
        ans[i] = m[j];
        i++;
    }

    for (int i = 0; i < x + y; i++) {
        printf("%c", ans[i]);
    }
    printf("\n");

    char tmp = n[0];
    n[0] = m[0];
    m[0] = tmp;
    printf("%s %s", n, m);

    return 0;
}