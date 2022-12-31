#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N)
{
    float sum = 0.0f;
    for (int j = 0;j < N;j++)
    {
        sum += S[j];
    }
    return sum / N;
}
int main()
{
    ElementType S[MAXN] = { 0 };
    int N = 0;
    int i = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}