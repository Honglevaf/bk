
//求100以内最大素数
#include <stdio.h>
#include <math.h>
int fun(int high)
{
	int sum = 0, n = 0, j, yes;

	while ((high >= 2) && (n < 10))
	{
		yes = 1;
		for (j = 2; j <= high / 2; j++)
			if (high % j == 0)
			{
				yes = 0;
				break;
			}
		if (yes == 1)
		{
			sum += high;
			n++;
		}
		high--;
	}
	return sum;
}

int main(void)
{
	printf("%d\n", fun(100));
	return (0);
}
