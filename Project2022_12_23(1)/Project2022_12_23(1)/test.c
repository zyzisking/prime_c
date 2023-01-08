#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int seconds = 0;
    scanf("%d", &seconds);
    printf("%d ", seconds / 3600);
    printf("%d ", (seconds % 3600) / 60);
    printf("%d", (seconds % 3600) % 60);
    return 0;
}