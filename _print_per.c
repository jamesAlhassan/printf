#include "main.h"

/**
 * _print_per - prints "%" character
 * @ls: list of arguments, va_list
 *
 * Return: the number of printed chars, int
 */

int _print_per(va_list ls)
{
	char c = '%';

	(void) ls;

	write(1, &c, 1);
	return (1);
}
