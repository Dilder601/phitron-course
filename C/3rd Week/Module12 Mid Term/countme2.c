#include<stdio.h>
#include<string.h>
int main() {
    char ch[100001];
    scanf("%s", ch);
    int len = strlen(ch);
    int val = 0;
    for (int i = 0; i < len; i++) {
        if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u') {
            val++;
        }
    }
    printf("%d", val);
    return 0;
}