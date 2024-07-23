#include<stdio.h>
void fun(int x) {
    // printf("Fun x er address of value - %p\n", &x);
    x = 200;
}

int main() {
    int x = 10;
    // printf("Main x er address of value - %p\n", &x);
    fun(x);
    printf("Main x er  value - %d\n", x);
    return 0;
}