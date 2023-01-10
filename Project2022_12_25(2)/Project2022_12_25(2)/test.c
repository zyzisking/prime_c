#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum << 1;
        n--;
    }
    printf("%d", sum);
}