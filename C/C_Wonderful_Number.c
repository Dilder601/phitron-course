#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isOdd(int n) {
    return n % 2 != 0;
}


bool isPalindrome(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int N;
    scanf("%d", &N);


    if (isOdd(N)) {

        char binary[33];
        itoa(N, binary, 2);


        if (isPalindrome(binary)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    else {
        printf("NO\n");
    }

    return 0;
}


/*#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
*/