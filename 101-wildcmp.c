#include "main.h"

/**
 * wildcmpf - Compare strings
 * @s1f: pointer to string params
 * @s2f: pointer to string params
 * Return: 0
 */

int wildcmpf(char *s1f, char *s2f)
{
    if (*s1f == '\0')
    {
        if (*s2f != '\0' && *s2f == '*')
        {
            return (wildcmpf(s1f, s2f + 1));
        }
        return (*s2f == '\0');
    }

    if (*s2f == '*')
    {
        return (wildcmpf(s1f + 1, s2f) || wildcmpf(s1f, s2f + 1));
    }
    else if (*s1f == *s2f)
    {
        return (wildcmpf(s1f + 1, s2f + 1));
    }
    return (0);
}
	
