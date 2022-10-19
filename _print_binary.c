#include "main.h"

/**
 * _print_binary - converts decimal to binary and prints it
 * @ls: list passed
 * Return: count of characters printed
 */
int _print_binary(va_list ls)
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
	if (num < 1)
		return (-1);
	
	while (num / divisor >= 2)
	{
		divisor *= 2;
	}

	while (divisor > 0)
	{
		ch =  num / divisor + '0';
		len = len + write(1, &ch, 1);
		num = num % divisor;
		divisor /= 2;
	}

	return (len);
}
