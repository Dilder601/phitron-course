#include<stdio.h>
int main() {
    char x, y;
    scanf("%c", &x);
    if (x == 'z') {
        printf("a");
    }
    else {
        y = x + 1;
        printf("%c", y);
    }
    return 0;
}