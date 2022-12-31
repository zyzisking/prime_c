#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include<stdio.h>

#define MAXN 10

float sum = 0.0f;
double f(int n, double a[], double x)
{
    for (int j = 0;j <= n;j++)
    {
        sum += a[j] * (pow(x, j));
    }
}
int main()
{
    int n, i;
    double a[MAXN] = {0};
    double x = 0;
    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}