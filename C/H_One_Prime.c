#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            printf("NO");
            break;
        }
        else {
            for (int i = 1; i < x; i++) {
                if (x % i != 0) {
                    printf("YES");
                    break;
                }
            }
        }
    }



    return 0;
}