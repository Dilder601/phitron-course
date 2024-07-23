#include<stdio.h>
int main() {
    // initialize
    char a[6] = "Mithu";
    int sz = sizeof(a) + sizeof(char);
    printf("%d\n", sz);
    // for (int i = 0; i < 5; i++) {
    //     printf("%c", a[i]);
    // }
    printf("%s", a);
    return 0;
}