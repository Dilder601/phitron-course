#include<stdio.h>
int main() {
    int c[5];
    int sz = sizeof(c) / sizeof(int);
    printf("%d", sz);
    return 0;
}