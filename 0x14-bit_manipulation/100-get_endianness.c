#include "main.h"

/**
 * get_endianness - determines machine size
 * Return: 0 big 1 small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
