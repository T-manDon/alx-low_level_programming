#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table.
 * Return: A pointer to the newly created hash table.
 */

/*
This function performs the following steps:
1. Allocate memory for the hash table structure.
2. Allocate memory for the array of pointers to hash nodes.
3. Initialize the array of pointers to NULL.
4. Set the size of the hash table.
5. Return a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int i;

    // Allocate memory for the hash table structure.
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);

    // Allocate memory for the array of pointers to hash nodes.
    hash_table->array = malloc(size * sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return (NULL);
    }

    // Initialize the array of pointers to NULL.
    for (i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    // Set the size of the hash table.
    hash_table->size = size;

    // Return a pointer to the newly created hash table.
    return (hash_table);
}
