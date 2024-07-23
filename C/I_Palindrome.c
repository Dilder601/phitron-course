#include<stdio.h>
#include<string.h>
int main() {
    char arr[1001];
    int ans = 1;
    scanf("%s", arr);
    int len = strlen(arr);

    int i = 0, j = len - 1;
    while (i < j) {
        if (arr[i] != arr[j]) {
            ans = 0;
            break;
        }
        i++;
        j--;
    }

    if (ans == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}