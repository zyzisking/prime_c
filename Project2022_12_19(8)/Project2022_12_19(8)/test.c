#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXN 10

int Sum(int List[], int N)
{
    int sum = 0;
    for (int j = 0;j < N;j++)
    {
        sum += List[j];
    }
    return sum;
}
int main()
{
    int List[MAXN] = { 0 };
    int N = 0;
    int i = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}