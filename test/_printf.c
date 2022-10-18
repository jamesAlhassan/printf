#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * Return: 0 if success
 */

int _printf(const char *format, ...)
{
	int i;

	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;

			if (format[i] == '\0')
				return (0);

			switch (format[i])
			{
				case '%':
					_putchar('%');
					break;
				case 'c':
					_putchar(va_arg(arg, int));
					break;

				case 's':
					_print_string(va_arg(arg, char *str));
			}
		}
	}
	va_end(arg);

	return (0);
}
