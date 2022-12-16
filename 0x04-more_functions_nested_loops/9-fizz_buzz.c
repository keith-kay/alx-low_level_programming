#include "main.h"
#include <stdio.h>

/**
 * main - prints a fizz buzz 
 * Return: ALways (Success)
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
	if ((c % 3 == 0) && (c % 5 == 0))
	{
	printf("FizBuzz");
	}
	else if (c % 3 == 0)
	{
	printf("Fizz");
	}
	else if ( c % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", c);
	}
	if (c != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}	
