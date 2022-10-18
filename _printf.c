#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list print;

	va_start(print, format);

	int a = 0;

	while (format[a] != '\0')
	{
		if (s[a] == '%' && s[a + 1] == 'd' || s[a] == '%' && s[a + 1] == 'i')
		{
			result = printf("%d", va_arg(print, int));
		}
		if (s[a] == '%' && s[a + 1] == 'c')
		{
			result = printf("%c", va_arg(print, int));
		}
		if (s[a] == '%' && s[a + 1] == 's')
		{
			result = printf("%s", va_arg(print char *));
		}
		if (s[a] == ' ')
		{
			result =  putchar(' ');
		}
		if (s[a] == 'd' && s[a + 1] == 'n')
		{
			result = printf("\n");
		}
		if (s[a] == '%' && s[a + 1] == 'f')
		{
			result = printf("%f", va_arg(print, double);
		}
		else if (s[a] != 'd' && s[a + 1] != 'n' && s[a] != '%' && s[a + 1] != 's' && s[a] != '%' && s[a + 1] != 'c' && s[a] != '%' && s[a + 1] != 'd')
		{
			result = putchar(format[a];
		}
		a++
	}
	return (result);
}
