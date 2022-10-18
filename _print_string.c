#include "main.h"

/**
 * _print_string - prints a string to stdout
 * @str: string to print out
 */

void _print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
