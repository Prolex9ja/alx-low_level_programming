#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i < 10)
	{
		ch = 'a';
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
