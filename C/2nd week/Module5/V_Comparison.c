#include<stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Right");
    }
    else if (a == b) {
        printf("Right");
    }
    else if (a < b) {
        printf("Wrong");
    }
    else {
        printf("Wrong");
    }
    return 0;
}