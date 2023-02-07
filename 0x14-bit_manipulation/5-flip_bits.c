#include "main.h"

/**
 * flip_bits - function that returns number of bits to flip to get from one number 
 * @n: bit to flip to get another number
 * @m: bit to flip to get another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i,count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	
	return (count);
}	
