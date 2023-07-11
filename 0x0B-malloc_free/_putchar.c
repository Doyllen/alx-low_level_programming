#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 * @c: This is the character to be printed
 *
 * Return: 1 On success
 * When there is an error, -1 is returned, and errno is set appropriately. 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
