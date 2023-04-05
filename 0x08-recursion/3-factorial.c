#include "main.h"

/**
 * factorial - introduces the main part of the factorial code
 * @n: the main variable
 * Return: 0 success
 */

int factorial(int n)

{

	if (n < 0)

	return (-1);

	if (n == 0)

	return (1);

	return (n * factorial(n - 1));

}
