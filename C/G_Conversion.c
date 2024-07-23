#include<stdio.h>
#include<string.h>

int main() {
    char arr[100001];
    fgets(arr, sizeof(arr), stdin);
    int sz = strlen(arr);

    for (int i = 0; i < sz; i++) {
        if (arr[i] == ',') {
            printf(" ");
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            char res = arr[i] - ('a' - 'A');
            printf("%c", res);
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            char res = arr[i] + ('a' - 'A');
            printf("%c", res);
        }
        else {
            printf("%c", arr[i]);
        }
    }
    return 0;
}

