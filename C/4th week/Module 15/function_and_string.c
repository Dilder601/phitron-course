#include<stdio.h>
void fun(char arr[]) {
    int sz = sizeof(arr) / sizeof(char);
    printf("%d", sz);
}
int main() {
    char arr[20] = "hello";
    fun(arr);
    return 0;
}