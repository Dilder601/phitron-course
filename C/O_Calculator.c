#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    char arithSign;
    scanf("%c", &arithSign);
    int b;
    scanf("%d", &b);
    int vRes = 0;
    if (arithSign == '+') {
        vRes = a + b;
        printf("%d", vRes);
    }
    else if (arithSign == '-') {
        vRes = a - b;
        printf("%d", vRes);
    }
    else if (arithSign == '*') {
        vRes = a * b;
        printf("%d", vRes);
    }
    else if (arithSign == '/') {
        vRes = a / b;
        printf("%d", vRes);
    }
    return 0;
}