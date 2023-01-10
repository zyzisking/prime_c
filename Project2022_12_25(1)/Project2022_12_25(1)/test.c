#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char a = 0;
    while (scanf("%s", &a) != EOF)
    {
        printf("%c\n", a + 32);
        getchar();
    }
}