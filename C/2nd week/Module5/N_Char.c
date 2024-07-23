#include<stdio.h>
int main() {
    char inpChar;
    scanf("%c", &inpChar);
    if (inpChar >= 'a' && inpChar <= 'z') {
        int res = inpChar - 32;
        printf("%c", res);
    }
    else {
        int res = inpChar + 32;
        printf("%c", res);
    }
    return 0;
}