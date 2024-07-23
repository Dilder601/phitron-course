#include<stdio.h>
int main() {
    int myDigit;
    scanf("%d", &myDigit);
    int res = myDigit / 1000;
    if (res % 2 == 0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}