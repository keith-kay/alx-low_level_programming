#include "main.h"

/**
 * clear_bit - function that sets value bit to 0
 * @index: index starting from 0
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
