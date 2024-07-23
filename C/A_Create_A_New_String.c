#include<stdio.h>
#include<string.h>
int main() {
    char a[1001];
    char b[1001];
    scanf("%s", a);
    scanf("%s", b);
    int sz1 = strlen(a);
    int sz2 = strlen(b);
    printf("%d %d\n%s %s", sz1, sz2, a, b);
    return 0;
}