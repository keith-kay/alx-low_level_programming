#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = (char *)src;
	char *pdest = (char *)dest;
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		pdest[i] = psrc[i];
	}
	return (pdest);
}
