#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    if (a >= 100)
    {
        a %= 100;
    }
    if (b >= 100)
    {
        b %= 100;
    }
    sum = a + b;
    printf("%d", sum % 100);
    return 0;
}