#include<stdio.h>
int main() {
    int x = 100;
    /// ptr x ke pointer kortese
    int* ptr = &x;
    /*printf("x er address -  %p\n", &x);
    printf("ptr er value -  %p\n", ptr);
    printf("ptr er value -  %p\n", &ptr);
    printf("ptr er size -  %d\n", sizeof(ptr));*/

    // x = 200;
    *ptr = 200;
    // x =200 and *ptr same

    printf("x er value %d\n", x);
    printf("x er value %d\n", *ptr);
    // so x er derefenrece value 200
    return 0;
}