#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - function for calculating length of a string
 * @str: length variable
 * Return: stLen
 */
int _strlen(char *str)
{
	int stLen = 0;

	while (*str++)
		stLen++;

	return (stLen);
}

/**
 * _strcopy - strcopy is a function used to copy a string
 * @dest: destination
 * @src: source
 * Return: dest pointer
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - new_dog is a function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(d->name, name);
	dog->age = age;
	dog->owner = _strcopy(d->owner, owner);

	return (d);
}
