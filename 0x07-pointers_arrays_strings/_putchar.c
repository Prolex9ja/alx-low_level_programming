#include <unistd.h?

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: on error, -11 is returned, and errno is set appropratelt.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
