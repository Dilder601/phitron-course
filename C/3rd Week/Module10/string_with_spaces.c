#include<stdio.h>
#include<string.h>
int main() {
    char a[22];

    // use two function example gets(a)/ fgets(a,21,stdin);
    // fgets accept enter
    /*
   gets(a);
     printf("%s", a);
     return 0;
    */
    fgets(a, 21, stdin);
    a[10] = '\0';
    printf("%s", a);
    return 0;

}