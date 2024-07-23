#include<stdio.h>
#include<math.h>

int main() {
    int  a, b;
    scanf("%d %d", &a, &b);
    float res = (a * 1.0 / b);
    int  vFloor = floor(res);
    int  vCeil = ceil(res);
    int  vRound = round(res);

    printf("floor %d / %d = %d\n", a, b, vFloor);
    printf("ceil %d / %.d = %d\n", a, b, vCeil);
    printf("round %d / %d = %d\n", a, b, vRound);


    return 0;
}