#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - introduces the code
 * @b: the main variable bytes
 * Return: 0 success
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

	exit(98);

	return (ptr);

}
