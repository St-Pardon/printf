#include "main.h"

/**
 * _printf - output value to stdio
 * @format: param
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j, len = 0;
	char *str;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			len++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				putchar(va_arg(args, int));
				len++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					len++;
				}
			}
			else if (format[i + 1] == '%')
			{
				putchar('%');
				len++;
			}
			i++;
		}
	}
	va_end(args);
	return (len);
}
