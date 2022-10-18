#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * Return: 0 if success
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list ls;
	charfunc ids[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'\0', NULL}
	};
	va_start(ls, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			while (format[i] != '\0')
			{
				for (j = 0; ids[j].id != '\0'; i++)
				{
					if (format[i] == ids[j].id)
					{
						count += ids[j].fn(ls);
						break;
					}
				}
				if (ids[j].id)
					break;
				if (format[i] == '\0')
					return (-1);
				i++;
			}
		}
	}
	va_end(ls);
	return (count);
}
