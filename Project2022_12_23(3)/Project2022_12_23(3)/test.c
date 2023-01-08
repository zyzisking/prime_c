#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    float c = (float)b / 100;
    printf("%.2f", (a / (c * c)));
    return 0;
}