#include<stdio.h> 
int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum > 0) {
        printf("%lld", sum);
    }
    else {
        long long int negToPosSum = sum * -1;
        printf("%lld", negToPosSum);
    }
    return 0;
}