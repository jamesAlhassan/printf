#include "main.h"

/**
 * _print_hex - converts decimal to a hex
 * @ls: list passed
 * Return: count of characters printed
 */
int _print_hex(va_list ls)
{
	int divisor = 1, len = 0, temp;
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
	while (num / divisor >= 16)
	{
		divisor *= 16;
	}

	while (divisor > 0)
	{

		temp = num / divisor;
		if (temp < 10)
			ch = temp;
		else
		{
			temp += 55;
			ch = temp;
		}
		ch =  num / divisor + '0';
		len = len + write(1, &ch, 1);
		num = num % divisor;
		divisor /= 16;
	}
	return (len);
}
