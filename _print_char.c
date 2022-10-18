#include "main.h"

/**
 * _print_char - prints a single char
 * @c: character to print
 * Return: number of character printed
 */
int _print_char(char c)
{
	if (c == NULL)
		return (0);
	return (write(1, &c, 1);
}
