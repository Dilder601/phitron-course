#include<stdio.h>
int main() {
    // long long int x, y, divX, divY, minaTaka, rinaTaka;
    // scanf("%lld %lld", &x, &y);
    // divX = x / 2;
    // divY = y / 2;
    // minaTaka = divX + divY;
    // rinaTaka = divX - divY;
    // printf("%lld %lld", minaTaka, rinaTaka);
    // return 0;

    int x, y, mina, rina;

    scanf("%d %d", &x, &y);
    mina = (x + y) / 2;
    rina = mina - y;
    printf("%d %d", mina, rina);
    return 0;
}