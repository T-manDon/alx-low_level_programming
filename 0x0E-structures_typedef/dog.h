#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores basic info about the dog
 * @name: First variable
 * @age: the second variable
 * @owner: the third variable
 * Description: offer the long description in the results
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	};

	/**
	 * dog_t - refers to the typedef for dog
	 */

	typedef struct dog dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);

	void print_dog(struct dog *d);

	dog_t *new_dog(char *name, float age, char *owner);

	void free_dog(dog_t *d);

	char *_strcpy(char *dest, char *src);

	int _strlen(char *s);

	#endif
