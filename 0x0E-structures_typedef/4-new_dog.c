#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len_im = 0;

	while (s[len_im] != '\0')
	{
		len_im++;
	}

	return (len_im);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest_im, char *src_im)
{
	int len_im, i_im;

	len_im = 0;

	while (src_im[len_im] != '\0')
	{
		len_im++;
	}

	for (i_im = 0; i_im < len_im; i_im++)
	{
		dest_im[i_im] = src_im[i_im];
	}
	dest_im[i_im] = '\0';

	return (dest_im);
}

/**
 * new_dog - creates a new dog
 * @name_im: name of the dog
 * @age_im: age of the dog
 * @owner_im: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name_im, float age_im, char *owner_im)
{
	dog_t *dog_im;
	int len1_im, len2_im;

	len1_im = _strlen(name_im);
	len2_im = _strlen(owner_im);

	dog_im = malloc(sizeof(dog_t));
	if (dog_im == NULL)
		return (NULL);

	dog_im->name = malloc(sizeof(char) * (len1_im + 1));
	if (dog_im->name == NULL)
	{
		free(dog_im);
		return (NULL);
	}
	dog_im->owner = malloc(sizeof(char) * (len2_im + 1));
	if (dog_im->owner == NULL)
	{
		free(dog_im);
		free(dog_im->name);
		return (NULL);
	}
	_strcpy(dog_im->name, name_im);
	_strcpy(dog_im->owner, owner_im);
	dog_im->age = age_im;

	return (dog_im);
}

