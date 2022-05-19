#include "main.h"

/**
 * _printf - output value to stdio
 * @format: param
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;
	char *str;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				len++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				_putstr(str), len++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%'), len++;
			}
			else
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
			} i++;
		}
	}
	va_end(args);
	return (len);
}
