#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
    float r = 0.0f;
    float V = 0.0f;
    scanf("%f", &r);
    V = (float)4 / 3 * (3.1415926 * pow(r, 3));
    printf("%.3f", V);
    return 0;
}
