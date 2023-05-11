#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);

void close_file(int fd);

/**
 * create_buffer - introduces the function
 * @file: The file variable
 * Return: 0 for success or 1 for null
 */

char *create_buffer(char *file)

{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)

	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
 * close_file - this variable closes the file
 * @fd: this is the fd variable
 */

void close_file(int fd)

{
	int c;

	c = close(fd);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - selects the file content
 * @argc: This is the argument variable
 * @argv: This is the array variable
 * Return: 0 for success or 1 for null
 * Description: Incase of incorrect count use 97
 * If file_from not exisent use code 98
 * If file_to not creatable use exit code 99
 * If file_to or file_from not closable use 100
 */

int main(int argc, char *argv[])

{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1 || r == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}

	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}

	r = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
