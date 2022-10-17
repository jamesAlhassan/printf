#include "main.h"

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
			i++;
	}
	va_end(arg);

	return (0);
}
