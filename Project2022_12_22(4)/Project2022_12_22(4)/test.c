#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    float b = 0.0f;
    scanf("%f", &b);
    a = (int)b;
    printf("%d", a % 10);
    return 0;
}