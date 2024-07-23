#include<stdio.h>
#include<string.h>
int main() {
    char arr1[100], arr2[100];
    scanf("%s %s", arr1, arr2);
    // for use built in function
    strcpy(arr1, arr2);

    // for use manually
    /*for (int i = 0; i <= strlen(arr2); i++) {
        arr1[i] = arr2[i];
    }*/
    printf("%s %s", arr1, arr2);
    return 0;
}