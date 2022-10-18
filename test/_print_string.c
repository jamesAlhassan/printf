#include "main.h"

/**
 * _print_string - prints a string to stdout
 * @str: string to print out
 * Return: number of characters printed
 */

int _print_string(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		(write(1, &str[i], 1));
	}

	return (i);
}
