#include<stdio.h>
void fun(int* p) {
    // printf("p er   value - %p\n", p);

    // printf("x er   value - %d\n", *p);

    *p = 200;
}

int main() {
    int x = 100;
    // printf("x er address of value - %p\n", &x);
    fun(&x);
    printf("x er value - %d\n", x);
    return 0;
}