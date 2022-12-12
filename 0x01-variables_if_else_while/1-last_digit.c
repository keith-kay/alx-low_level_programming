#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of the number
 * return - Always (Success)
 *
 */

int  main(void)

{
	int n, lastno;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastno = n % 10;

	if (lastno > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastno);
	}
	else if (lastno == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastno);
	}
	else if (lastno < 6 && lastno != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastno);
	}
	return (0);
}
