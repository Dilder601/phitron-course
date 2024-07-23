#include<stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    for (int i = 1;i <= row;i++) {
        if (i % 2 == 1) {
            for (int j = 1;j <= col;j++) {
                printf("#");
            }
        }
        else {
            if (i % 4 == 0) {
                printf("#");
                for (int j = 2;j <= col;j++) {
                    printf(".");
                }
            }
            else {
                for (int j = 2;j <= col;j++) {
                    printf(".");
                }
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}