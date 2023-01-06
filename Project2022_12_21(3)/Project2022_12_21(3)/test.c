#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int temp = 0;
    scanf("a=%d,b=%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d,b=%d", a, b);
}