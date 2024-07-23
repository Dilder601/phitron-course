#include<stdio.h>
int main() {
    int age, dauAge, fatAge;
    scanf("%d", &age);
    dauAge = age / 5;
    fatAge = age - dauAge;
    printf("%d %d", fatAge, dauAge);
    return 0;
}