#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}
	va_end(arg);

	return (0);
}
