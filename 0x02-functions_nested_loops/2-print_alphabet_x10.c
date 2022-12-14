#include "main.h"

/**
 * main - prints alphabet lowercase, 10 times
 * Return: Always (Success)
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	while (i < 9)
	{
		for (x = 'a'; x <= 'b'; x++)
		{
		_putchar(x);
		_putchar('\n');
		i++;
		}
	}
}
