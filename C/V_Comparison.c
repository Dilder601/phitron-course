#include<stdio.h>
int main() {
    int a, b;
    char sign;
    scanf("%d %c %d", &a, &sign, &b);

    if (sign == '>') {
        if (a > b) {
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }
    else if (sign == '<') {
        if (a < b) {
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }
    else if (sign == '=') {
        if (a == b) {
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }

    return 0;
}