#include "search_algos.h"

void print_array(int *array, size_t i, size_t size);

/**
binary_search - efficient search algorithm for sorted arrays
@array: sorted array of elements
@size: size of the array
@value: value to search for
Return: index of the value if found, -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, half = 0;

	if (array == NULL || value == 0)
		return (-1);

	print_array(array, low, size);
	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (array[half]);
	}
	return (-1);
}

/**
 * print_array - print all elements in an array
 * @array: list of elements
 * @i: index to init
 * @size: size of the array
 */
void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	} printf("\n");
}
