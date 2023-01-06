#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("year=%d\n", a / 10000);
    printf("month=%02d\n", (a / 100) - ((a / 10000) * 100));
    printf("date=%02d", a % 100);
}