#include "main.h"

/**
 * print_line - creates a straight line
 * @n: number of times to print the char
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
