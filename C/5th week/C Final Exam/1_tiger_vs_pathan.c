#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", &s);
        int tigerCnt = 0, pathanCnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'T') {
                tigerCnt++;
            }
            else if (s[i] == 'P') {
                pathanCnt++;
            }
        }

        if (tigerCnt > pathanCnt) {
            printf("Tiger\n");
        }
        else if (pathanCnt > tigerCnt) {
            printf("Pathaan\n");
        }
        else {
            printf("Draw\n");
        }
    }
    return 0;
}