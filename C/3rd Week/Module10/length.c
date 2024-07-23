#include<stdio.h>
#include<string.h>
int main() {
    char a[12];
    scanf("%s", a);


    // using built in function

    int st = strlen(a);
    printf("%d", st);



    // printf("%s", a);

    // now i need to find length

    /*
    using for loop
    */


    int count = 0;
    /*
        for (int i = 0; a[i] != '\0'; i++) {
        count++;
    }
    printf("%d\n", count);
    */


    /*
    Using while loop
    */

    /*
    int i = 0;
        while (a[i] != '\0') {
            count++;
            i++;
        }
        printf("%d\n", count);
    */



    return 0;
}