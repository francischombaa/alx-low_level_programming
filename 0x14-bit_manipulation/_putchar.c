#include "main.h"
#include <unistd.h>
/**
 * _putchar - write c character to stdout
 * @c: The character to do printing
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is being set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
