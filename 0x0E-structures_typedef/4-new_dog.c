#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - copies a string pointed to by src to dest
 * @src: variale where string will be copied from
 * @dest: variable that string will be copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a pointer in memory to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
