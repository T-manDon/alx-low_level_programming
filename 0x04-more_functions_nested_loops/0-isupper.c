#include "main.h"

/**
 * _isupper.c - uppercase letters
 * @c: refers to the character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}