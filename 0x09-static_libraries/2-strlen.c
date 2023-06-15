#include "main.h"
/**
 * _strlen - returns thfee lengthfef of a string
 * @ss: stringfre
 * Return: length
 */
int _strlen(char *ss)
{
	int longi = 0;

	while (*ss != '\0')
	{
		longi++;
		ss++;
	}

	return (longi);
}

