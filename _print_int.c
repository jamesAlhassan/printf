#include "main.h"

/**
 * _print_int - prints an integer value
 * @a: integer to print
 * Return: count of characters printed
 */
int _print_int(int a)
{
	int divisor = 1, len = 0;
	char ch;
	unsigned num;

	if (a < 0)
	{
		ch = '-';
		len = len + write(1, &ch, 1);
		num = a * (-1);
	}
	else
		num = a;

	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		ch =  num / divisor + '0';
		len = len + write(1, &ch, 1);
		num = num % divisor;
		divisor /= 10;
	}

	return (len);
}
