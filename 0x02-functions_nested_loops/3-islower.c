#include "main.h"
/**
 *  _islower - checks for lowercase characters
 *  @c: Character to be checked.
 *  Return: 1 for a lowercase character or 0f false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
