#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int arr1[3] = { 0 };
    for (int i = 1;i < 4;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int j = 1;j < 4;j++)
    {
        printf("score%d=%d", j, arr1[j]);
        if (j < 3)
            printf(",");
    }
}