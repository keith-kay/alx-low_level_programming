#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of single digits
 * Return: Always (Success)
 *
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar ((x % 10) + '0');
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
