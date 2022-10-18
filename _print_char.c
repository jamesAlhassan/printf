#include "main.h"

/**
 * _print_char - prints a single character
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _print_char(va_list ls)
{
	char c = va_arg(ls, int);
	write(1, &c, 1);
	return (1);
}
