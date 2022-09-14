#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: prints from the number
 */
void print_to_98(int n)
{
	int a, b , c = 0;

	b = 98;

	if ( n <= b)
	{
		for (a = n; a <= b; a++)
		{
			c == 0 ? c = 1 : printf(", ");
			printf("%d", a);
		}
	}
	else
	{
		for (a = n; a >= b; a--)
		{
			c == 0 ? c = 1: printf(", ");
			printf("%d", i);
		}
	}
	putchar('\n');
}
