#include<stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int tot_elements = row * col;
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                cnt++;
            }
        }
    }
    if (tot_elements == cnt) {
        printf("Zero Matrix\n");
    }
    else {
        printf("Not a zero matrix");
    }
    return 0;
}