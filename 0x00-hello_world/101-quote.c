#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19,
 * followed by a line, to the standard error.
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that peice of art is useful\" - Dora korpar, 2015-10-19\n", 33);
	return (1);
}
