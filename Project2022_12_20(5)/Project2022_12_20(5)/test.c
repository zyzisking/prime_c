#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char c = 0;
    scanf("%c", &c);
    printf("    %c\n   %c %c\n  %c %c %c\n %c %c %c %c\n%c %c %c %c %c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
}