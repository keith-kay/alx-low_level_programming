#include <stdlib.h>
#include <main.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	/*Define values with malloc*/
	str = (char *) malloc(size * sizeof(c));

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(str + i) = c;
			position;
		}
		return (str);
	}
}
