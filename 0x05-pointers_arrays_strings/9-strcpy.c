#include "main.h"

/**
 * char *_strcpy - the function copies the pointed string
 * @dest: Copy into
 * @src: file is copied from
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
