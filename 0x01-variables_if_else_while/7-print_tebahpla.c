#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabets in reverse
 * Return: Always (Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
