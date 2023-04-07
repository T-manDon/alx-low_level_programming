#include "main.h"


int actual_sqrt_recursion(int n, int i);


/**
 * _sqrt_recursion - the main function that introduces the code
 * @n: this is one of the variables
 * Return: 0
 */

int _sqrt_recursion(int n)

{
	if (n < 0)

	return (-1);

	return (actual_sqrt_recursion(n, 0));

}

/**
 * actual_sqrt_recursion - introduces the main part of the recursive code
 * the code determines the squareroots
 *
 * @n: comprises the second variable
 * @i: this is the iterator
 * Return: 0
 */

int actual_sqrt_recursion(int n, int i)

{
	if (i * i > n)

	return (-1);

	if (i * i == n)

	return (i);

	return (actual_sqrt_recursion(n, i + 1));

}

