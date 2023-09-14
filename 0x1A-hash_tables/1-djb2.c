#include "hash_tables.h"

/**
 * hash_djb2 - Function to compute a hash of 'str' using the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The 64-bit hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash; // Initialize the hash value.
    int c;

    hash = 5381; // Initial hash value defined by the djb2 algorithm.
    while ((c = *str++)) // Iterate through each character of the input string.
    {
        // Update the hash using the djb2 algorithm formula: hash * 33 + c.
        hash = ((hash << 5) + hash) + c;
    }
    return (hash); // Return the calculated hash value.
}
