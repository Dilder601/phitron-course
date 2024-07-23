#include<stdio.h>
int main() {
    char myChar;
    scanf("%c", &myChar);
    if (myChar >= '0' && myChar <= '9') {
        printf("IS DIGIT\n");
    }
    else {
        printf("ALPHA\n");
        if (myChar >= 'a' && myChar <= 'z') {
            printf("IS SMALL\n");
        }
        else {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}