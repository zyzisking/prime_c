#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>

int main()
{
    int a = 0;
    double b = 0;
    scanf("%d", &a);
    b = 3.156 * pow(10, 7);
    printf("%ld", (long)(a * b));
    return 0;
}