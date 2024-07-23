#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n > 1000) {
        if (n >= 1500) {
            printf("punjabi\nmy shoe\nalisa shoe");
        }
        else {
            printf("my punjabi");
        }
    }
    else {
        printf("bad luck!");
    }
    return 0;
}