#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: is a character string.
 * Return: 0 if success
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list lst;
	charfunction ids[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_int},
		{'d', _print_int},
		{'%', _print_per},
		{'b', _print_binary},
		{'\0', NULL}
	};
	va_start(lst, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; ids[j].id != '\0'; j++)
			{
				if (format[i] == ids[j].id)
				{
					count += ids[j].fn(lst);
					break;
				}
			}
			if (ids[j].id == '\0' && format[i] != ' ')
			{
				count = count + _putchar(format[i - 1]);
				count = count + _putchar(format[i]);
			}
			else
				return (-1);
		}
		else
		{
			count = count + _putchar(format[i]);
		}
	} 
	va_end(lst);
	return (count);
}
