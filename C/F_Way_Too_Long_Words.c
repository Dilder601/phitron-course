#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    char ch[101];
    for (int i = 0; i < n; i++) {
        scanf("%s", ch);
        int len1 = strlen(ch);
        int lastIdex = len1 - 1;
        char firstIndexVal = ch[0];
        char lastIndexVal = ch[lastIdex];
        if (len1 > 10) {
            printf("%c%d%c\n", firstIndexVal, len1 - 2, lastIndexVal);
        }
        else {
            printf("%s\n", ch);
        }
    }

    return 0;
}

