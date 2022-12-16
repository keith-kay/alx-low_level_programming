#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 * Return: Alwys 0
 */

int main(void)
{
	long x, maxfact;
	long num = 612852475143;
	double sq = sqrt(num);

	for (x = 1; x <= sq; x++)
	{
		if (num % x == 0)
		{
			maxfact = num / x;
		}
	}
	printf("%ld\n", maxfact);
	return (0);
}
