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
		{
			i++;

			switch (format[i])
			{
				case '%':
					/*_putchar('%');*/
					break;
				case 'c':
					_putchar(va_arg(arg, int));
					break;
			}
		}
	}
	va_end(arg);

	return (0);
}
