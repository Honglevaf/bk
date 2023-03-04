#include <stdio.h>
int fun(int n)
{
   int i, j, cnt = 0;

   printf("\nThe prime number between 3 to %d\n", n);
   for (i = 3; i <= n; i++)
   {
      for (j = 2; j < i; j++)
         if (i % j == 0)
            break;
      if (j >= i)
      {
         cnt++;
         printf(cnt % 15 ? "%5d" : "\n%5d", i);
      }
   }
   return cnt;
}
int main(void)
{
   int n = 20, r;

   r = fun(n);
   printf("\nThe number of prime is : %d\n", r);
}
