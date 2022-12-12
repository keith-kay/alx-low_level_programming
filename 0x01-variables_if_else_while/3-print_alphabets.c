#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and then in uppercase
 * Return: Always (success)
 *
 */
int main(void)
{
	char ch;

	/* print lowercase letters */
	for(ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
	/* prints uppercase letters */
	for (ch = 'A'; ch <= 'B'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
