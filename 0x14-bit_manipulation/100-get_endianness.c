#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return 0 success, 1 failure
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
