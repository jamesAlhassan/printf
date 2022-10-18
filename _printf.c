#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * Return: 0 if success
 */

int _printf(const char *format, ...)
{
	int i, count;

	va_list arg;

	if (format == NULL)
		return (-1);

	count = 0;
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;

			if (format[i] == '\0')
				return (0);
			switch (format[i])
			{
				case '%':
					_putchar('%');
					count++;
					break;
				case 'c':
					 _putchar(va_arg(arg, int));
					 count++;
					break;
				case 's':
					count = count + _print_string(va_arg(arg, char *));
					break;
			}
		}
	}
	va_end(arg);
	return (count);
}
