#include "hash_tables.h"

/**
 * key_index - the key index
 * @key: hash key
 * @size: hashtable size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
