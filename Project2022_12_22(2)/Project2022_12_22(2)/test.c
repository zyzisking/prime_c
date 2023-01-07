#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 0;
    int arr[4] = { 0 };
    scanf("%d", &a);
    for (int i = 0;i < 4;i++)
    {
        arr[i] = a % 10;
        a /= 10;
    }
    for (int j = 0;j < 4;j++)
    {
        printf("%d", arr[j]);
    }
    return 0;
}