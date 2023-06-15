#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @fg: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *fg)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (fg[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (fg[i] == '-')
			++d;

		if (fg[i] >= '0' && fg[i] <= '9')
		{
			digit = fg[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (fg[i + 1] < '0' || fg[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

