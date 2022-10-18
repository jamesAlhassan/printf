#include "main.h"

/**
 * _print_string - prints a string to stdout
 * @str: string to print out
 * Return: 0 if success
 */

int _print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		(write(1, &str[i], 1));
	}

	return (0);
}
