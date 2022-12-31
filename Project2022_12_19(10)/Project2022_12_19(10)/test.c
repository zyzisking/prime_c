#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N)
{
    for (int j = 0;j < N;j++)
    {
        for (int k = 0;k < N - 1 - j;k++)
        {
            if (S[k + 1] > S[k])
            {
                float temp = 0.0f;
                temp = S[k + 1];
                S[k + 1] = S[k];
                S[k] = temp;
            }
        }
    }
    return S[0];
}
int main()
{
    ElementType S[MAXN] = { 0 };
    int N = 0;
    int i = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}