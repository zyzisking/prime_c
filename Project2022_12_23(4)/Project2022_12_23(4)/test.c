#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>

int main()
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    float s = 0.0f;
    float p = 0.0f;
    float length = 0.0f;
    scanf("%f %f %f", &a, &b, &c);
    length = a + b + c;
    p = (a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f", length, s);
    return 0;
}