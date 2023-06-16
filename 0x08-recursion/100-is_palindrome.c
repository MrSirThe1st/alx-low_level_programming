#include "main.h"

int check_palp(char *sp, int ip, int lenp);
int _strlen_recursionp(char *sp);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
    if (*s == 0)
        return (1);
    return (check_palp(s, 0, _strlen_recursionp(s)));
}

/**
 * _strlen_recursionp - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursionp(char *sp)
{
    if (*sp == '\0')
        return (0);
    return (1 + _strlen_recursionp(sp + 1));
}

/**
 * check_palp - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palp(char *sp, int ip, int lenp)
{
    if (*(sp + ip) != *(sp + lenp - 1))
        return (0);
    if (ip >= lenp)
        return (1);
    return (check_palp(sp, ip + 1, lenp - 1));
}

