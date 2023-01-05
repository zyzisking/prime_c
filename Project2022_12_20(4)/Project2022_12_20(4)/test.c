#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    float b = 0.0f;
    float c = 0.0f;
    float d = 0.0f;
    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
}