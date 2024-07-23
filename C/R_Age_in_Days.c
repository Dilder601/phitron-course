#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int year = n / 365;
    int useDays = year * 365;
    int remDays = n - useDays;
    int month = remDays / 30;
    int useMonthday = month * 30;
    int days = remDays - useMonthday;

    if (n > 365) {
        printf("%d years\n%d months\n%d days", year, month, days);
    }
    else if (n >= 30 && n < 365) {
        int mon = n / 30;
        int usemonday = mon * 30;
        int mondays = n - usemonday;
        printf("0 years\n%d months\n%d days", mon, mondays);
    }
    else if (n < 30) {
        printf("0 years\n0 months\n%d days", n);
    }
    else if (n == 365) {
        printf("%d years\n0 months\n0 days", year);
    }

    return 0;
}