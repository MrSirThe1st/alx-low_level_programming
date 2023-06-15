#include "main.h"

/**
 * _isalphab - checks for alphagrbetic character
 * @c: the charafefcter to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalphab(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

