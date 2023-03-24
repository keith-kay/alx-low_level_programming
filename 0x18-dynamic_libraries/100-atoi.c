#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, lngth, f, dgt;

	x = 0;
	y = 0;
	z = 0;
	lngth = 0;
	f = 0;
	dgt = 0;

	while (s[lngth] != '\0')
		lngth++;

	while (x < lngth && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			dgt = s[x] - '0';
			if (y % 2)
				dgt = -dgt;
			z = z * 10 + dgt;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (z);
}
