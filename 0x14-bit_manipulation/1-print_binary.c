#include "main.h"

/**
 * print_binary - a function that prints binary representation of another number
 * @n: interger containing the binary number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
	}
