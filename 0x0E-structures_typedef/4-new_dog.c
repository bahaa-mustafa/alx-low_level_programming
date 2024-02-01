#include "dog.h"
#include <stdlib.h>

/**
 * _strLen - get length of string
 * @str: pointer to string
 *
 * Return: length of string
 */

int _strLen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _copyStr - function that copy a string
 * @outputStr: a string after copy is done
 * @inputStr: a string that will copy
 *
 * Return: outputStr
 */

char *_copyStr(char *outputStr, char *inputStr)
{
	int i;

	for (i = 0; inputStr[i] != '\0'; i++)
	{
		outputStr[i] = inputStr[i];
	}
	outputStr[i] = '\0';
	return (outputStr);
}

/**
 * new_dog - function to declare new struct
 * @name: name of poppy
 * @age: poppy is age
 * @owner: poppy is owner
 *
 * Description: creat new struct for dog by dog_t typedef
 * Return: a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strLen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strLen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = _copyStr(dog->name, name);
	dog->age = age;
	dog->owner = _copyStr(dog->owner, owner);

	return (dog);
}
