#include<stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];

    // array of a: first matrix input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // array of b: secod matrix input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }


    // array of c: initialize on third matrix

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // print matric c

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }


    return 0;
}