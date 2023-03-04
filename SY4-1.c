//求最大公约数
#include <stdio.h>
int gcd(int u, int v);
int main()
{
    int u, v;
    printf("Enter a,b: ");
    scanf("%d %d", &u, &v);
    u = gcd(u, v);
    printf("The Result is: %d", u);
}
int gcd(int u, int v)
{
    int t;
    while (v != 0)
    {
        t = u % v;
        u = v;
        v = t;
    }
    return u;
}
