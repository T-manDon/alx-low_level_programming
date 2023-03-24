#include "main.h"

/**
 * print_diagonal - draws a diagnal line
 * @n: determines the number of times to print the lines
 */

void print_diaginal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}else
	{
		int i, j;

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{

				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		_putchar('\n');
	}

	}
