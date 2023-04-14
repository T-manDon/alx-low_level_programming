#include "main.h"

/**
 * _memset - the main function that fills memory with a constant byte
 * @s: one of the memory address
 * @b: the other value
 * @n: refers to the bytes requiring hange
 * Return: returns the n bytes value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}

