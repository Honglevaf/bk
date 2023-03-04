#include <stdio.h>
double fun(double m, double n);
int main()
{
    int m, n;
    double p;
    scanf("%d %d", &m, &n);
    p = fun(m, n);
    printf("p=%lf", p);
    return 0;
}
double fun(double m, double n)
{
    int i, a1 = 1, a2 = 1, a3 = 1;
    double p;
    for (i = 1; i <= m; i++)
        a1 *= i;
    for (i = 1; i <= n; i++)
        a2 *= i;
    m = m - n;
    for (i = 1; i <= m; i++)
        a3 *= i;
    p = (double)a1 / (a2 * a3);
    return p;
}