#include "main.h"

int run_printf(const char *, va_list, charfunction[]);
int _printf(const char *, ...);

/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * Return: 0 if success
 */
int _printf(const char *format, ...)
{
	int char_count;
	va_list lst;
	charfunction ids[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'%', _print_per},
		{'b', _print_binary},
		{'o', _print_oct},
		{'x', _print_hex},
		{'X', _print_hex},
		{'\0', NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(lst, format);
	char_count = run_printf(format, lst, ids);
	va_end(lst);
	return (char_count);
}

/**
 * run_printf - runs printf
 * @format: character string
 * @lst: argument list
 * @ids: ids of specifiers
 * Return: count of characters printed
 */
int run_printf(const char *format, va_list lst, charfunction ids[])
{
	int i, j, count;

	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; ids[j].id != '\0'; j++)
					if (format[i] == ids[j].id)
					{
						count += ids[j].fn(lst);
						break;
					}
				if (ids[j].id)
					break;
				count += _putchar(format[i - 1]);
				count += _putchar(format[i]);
				break;
			}
			if (format[i] == '\0')
				return (-1);
		}
		else
		{
			count += _putchar(format[i]);
		}
	return (count);
}
