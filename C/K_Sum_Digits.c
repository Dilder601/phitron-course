#include<stdio.h>
int main() {
    /*  // first soluation
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n;i++) {
        scanf("%1d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);*/
    /*second soluations*/
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        //printf("%d ", arr[i] - 48);
        sum += arr[i] - 48;
    }
    printf("%d", sum);

    return 0;
}