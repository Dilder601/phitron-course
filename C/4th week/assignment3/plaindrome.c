#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[]) {
    int len = strlen(arr);
    int i = 0, j = len - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return  0;
            break;
        }
        i++;
        j--;
    }

    return 1;
}

int main() {
    char arr[1001];
    scanf("%s", arr);

    if (is_palindrome(arr)) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

    return 0;
}
