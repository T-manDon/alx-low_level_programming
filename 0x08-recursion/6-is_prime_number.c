#include "main.h"


int actual_prime(int n, int i);


/**
 * is_prime_number - introduces the first part of the code
 * @n: the variable under analysis and scrutiny
 * Return: 1 or 0
 */

int is_prime_number(int n)

{
	if (n <= 1)

	return (0);

	return (actual_prime(n, n - 1));

}


/**
 * actual_prime - introduces the main function
 * @n: the number examined
 * @i: this is the iterator
 * Return: 1 or 0
 */

int actual_prime(int n, int i)

{
	if (i == 1)

	return (1);

	if (n % i == 0 && i > 0)

	return (0);

	return (actual_prime(n, i - 1));

}
