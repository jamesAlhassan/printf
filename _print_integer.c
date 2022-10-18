#include "main.h"

/**
 * _print_int - prints an integer value
 * @a: integer to print
 * Return: count of characters printed
 */
int _print_int(int a)
{
	int digit, divisor = 1, len = 0;
	char ch;

	if (n < 0)
	{
		ch = '-';
		len = len + write(1, &ch, 1);
		a = * (-1);
	}

	while (a / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		ch =  a / divisor + '0';
		len = len + write(1, &c, 1);
		a =% divisor;
		divisor /= 10;
	}

	return (len);
}
