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
			++i;
			if (format[i] == '\0')
				return (-1);
			switch (format[i])
			{
				case '%':
					_putchar('%');
					count++;
					break;
				case 'c':
					count = count + _print_char(va_arg(arg, int));
					break;
				case 's':
					count = count + _print_string(va_arg(arg, char *));
					break;
				case 'd':
					count++;
					_print_int(va_arg(arg, int));
					break;
				case 'i':
					_print_int(va_arg(arg, int));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
			}
		}
	}
	va_end(arg);
	return (count);
}
