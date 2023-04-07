#include "main.h"


int check_pal(char *s, int i, int len);

int _strlen_recursion(char *s);


/**
 * is_palindrome - constotutes the main part of the code
 * @s: refers to the main part of the code
 * Return: 1 or 0
 */

int is_palindrome(char *s)

{

	if (*s == 0)

	return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion - introduces the main code
 * @s: the main variable
 * Return: 1 or 0
 */

int _strlen_recursion(char *s)

{

	if (*s == '\0')

	return (0);

	return (1 + _strlen_recursion(s + 1));

}

/**
 * check_pal - introduces the code
 * @s: main variable
 * @i: this is the iterator
 * @len: variable depicting length
 * Return: 1 or 0
 */

int check_pal(char *s, int i, int len)

{

	if (*(s + i) != *(s + len - 1))

	return (0);

	if (i >= len)

	return (1);

	return (check_pal(s, i + 1, len - 1));

}
