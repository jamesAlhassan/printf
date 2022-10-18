#include "main.h"

/**
 * _print_char - prints a single character
 * @c: character to print
 * Return: number of characters printed
 */
int _print_char(char c)
{
	(write(1, &c, 1));
	return (1);
}
