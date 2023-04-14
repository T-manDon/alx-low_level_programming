#include <stdlib.h>
#include "main.h"

/**
 * *_memset - introduces the code
 * @s: the first variable
 * @b: the second variable
 * @n: the number of times the task gets executed
 * Return: 0 success
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);

}

/**
 * *_calloc - inroduces the main part of the code
 * @nmemb: the variable
 * @size: the size variabl
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;

	if (nmemb == 0 || size == 0)

	return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)

	return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
