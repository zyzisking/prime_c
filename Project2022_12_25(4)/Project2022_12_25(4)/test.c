#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float e = 0;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("%.1f", (a + b + c + d + e) / 5);
}