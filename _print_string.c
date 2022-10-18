#include "main.h"

/**
 * _print_string - prints a string to stdout
 * @ls: args list
 * Return: number of characters printed
 */

int _print_string(va_list ls)
{
	int i, count = 0;

	char *str = va_arg(ls, char *);

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		(write(1, &str[i], 1));
		count++;
	}

	return (count);
}
