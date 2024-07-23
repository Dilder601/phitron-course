#include<stdio.h>
int main() {
    char c[5];
    for (int i = 0; i < 5; i++) {
        scanf("%c", &c[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%c", c[i]);
    }
    return 0;
}