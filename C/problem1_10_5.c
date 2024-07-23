#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    char ch[n + 5];
    getchar();
    fgets(ch, sizeof(ch) / sizeof(char), stdin);
    int m;
    scanf("%d", &m);
    char ch1[m + 5];
    getchar();
    fgets(ch1, sizeof(ch1) / sizeof(char), stdin);
    printf("%s%s", ch, ch1);


    return 0;
}
