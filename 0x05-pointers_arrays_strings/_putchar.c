#include <unistd.h>

/**
 * -putchar - inputs character c to stdout
 *  Return: Always (success)
 *  error, -1 is returned.
 *
 */

int _putchar(char c)
{
                return (write(1, &c, 1));
}
