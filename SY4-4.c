#include <stdio.h>
void fun(int x1, int x2, int x3, int *a, int *b);
int main()
{
    int x1, x2, x3, max, min;
    scanf("%d %d %d", &x1, &x2, &x3);
    fun(x1, x2, x3, &max, &min);
    printf("max=%d,min=%d\n", max, min);

    return 0;
}
void fun(int x1, int x2, int x3, int *a, int *b)
{
    if (x1 > x2)
    {
        *a = x1;
        *b = x2;
    }
    else
    {
        *a = x2;
        *b = x1;
    }
    if (*a < x3)
        *a = x3;
    if (*b > x3)
        *b = x3;
}