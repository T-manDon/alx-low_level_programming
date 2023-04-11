#include <stdio.h>
#include "main.h"

/**
 * main - introduces the first part of the code
 * @argc: first variable argument
 * @argv: second variable argument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	{

	printf("%s\n", argv[i]);

	}

	return (0);

}

