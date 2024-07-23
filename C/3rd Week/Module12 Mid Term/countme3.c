#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);

    int capCnt = 0, smCnt = 0, NumCnt = 0;
    for (int i = 0; i < n; i++) {
        char t[10001];
        scanf("%s", t);

        for (int i = 0; i < strlen(t); i++) {
            if (t[i] >= 'a' && t[i] <= 'z') {
                smCnt++;
            }
            else if (t[i] >= 'A' && t[i] <= 'Z') {
                capCnt++;
            }
            else if (t[i] >= '0' && t[i] <= '9') {
                NumCnt++;
            }
        }
        printf("%d %d %d\n", capCnt, smCnt, NumCnt);
        capCnt = 0, smCnt = 0, NumCnt = 0;
    }

    return 0;
}