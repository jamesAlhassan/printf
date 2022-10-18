#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * stuct charfunction - struct to hold id and function
 * @id: character that identifies argument
 * @fn: function to run if id matches
 */
typedef struct charfunction
{
	char id;
	int (*fn)(va_list);
} charfunc;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(va_list ls);
int _print_char(va_list ls);
int _print_int(va_list ls);

#endif
