#include "main.h"

/**
 * print_last_digit - gives the final digit of number
 * @n: the int to extract the lanumvber value
 * Return: the last digit value
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
