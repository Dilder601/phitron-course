#include<stdio.h>
int main() {
    long long int e, m, b, min, res;
    scanf("%lld %lld %lld", &e, &m, &b);


    // min number 
    if (e < m) {
        if (e > b) {
            min = b;
        }
        else {
            min = e;
        }
    }
    else {
        if (m > b) {
            min = b;
        }
        else {
            min = m;
        }
    }

    long long int newE = (e - min) / 2;
    long long int newM = (m - min);
    long long int newB = (b - min);

    if (newE <= newB) {
        res = min + newE;
        printf("%lld", res);
    }
    else {
        res = min + newB;
        printf("%lld", res);
    }

    return 0;
}