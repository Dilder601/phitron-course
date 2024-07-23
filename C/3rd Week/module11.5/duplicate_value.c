#include<stdio.h>
int main() {
    int sz;
    scanf("%d", &sz);
    int inp[sz];

    for (int i = 0; i < sz;i++) {
        scanf("%d", &inp[i]);
    }
    // int n;
    // scanf("%d", &n);
    int largest = inp[0];

    for (int i = 0; i < sz; i++) {
        if (inp[i] > largest) {
            largest = inp[i];
        }
    }
    // printf("%d", largest);

    int fq[largest + 1];
    for (int i = 0;i <= largest;i++) {
        fq[i] = 0;
    }

    for (int i = 0; i < sz; i++) {
        int index = inp[i];
        fq[index] += 1;
    }

    int duplicate_value = 0;
    int unique = 0;
    for (int i = largest; i >= 0; i--) {
        if (fq[i] > 1) {
            duplicate_value++;
        }

        if (fq[i] == 1) {
            unique++;
        }

    }
    for (int i = 0; i < duplicate_value; i++) {

    }
    printf("duplicate value = %d\n", duplicate_value);
    printf("Unique value = %d", unique);

    return 0;
}