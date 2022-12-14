#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase, 10 times
 * Return: Always (Success)
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}

}
