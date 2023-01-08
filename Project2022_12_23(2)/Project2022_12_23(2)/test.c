#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
    return 0;
}