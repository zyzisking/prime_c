#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void PrintN(int N)
{
    for (int i = 1;i <= N;i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int N = 0;
    scanf("%d", &N);
    PrintN(N);
    return 0;
}