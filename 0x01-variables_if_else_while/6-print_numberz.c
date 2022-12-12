#include <stdio.h>

#include <stdlib.h>

#include <time.h>
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');

	return (0);
	
}
