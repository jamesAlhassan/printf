#include "main.h"

/**
 * _print_oct - converts decimal to a octal
 * @ls: list passed
 * Return: count of characters printed
 */
int _print_oct(va_list ls)
{
	int divisor = 1, len = 0;
	char ch;
	unsigned int num;

	num = va_arg(ls, unsigned int);
	if (num == 0)
	{
		ch = '0';
		write(1, &ch, 1);
		return (1);
	}
	if (num < 0)
		num *= -1;
	while (num / divisor >= 8)
	{
		divisor *= 8;
	}

	while (divisor > 0)
	{
		ch =  num / divisor + '0';
		len = len + write(1, &ch, 1);
		num = num % divisor;
		divisor /= 8;
	}
	return (len);
}
