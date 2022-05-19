#include "main.h"

/**
 * _printf - output value to stdio
 * @format: param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i, j, len = 0;

	f_id func_list[] = {/*pairing the format id to a handling function*/
		{"c", _print_char},
		{"s", _putstr},
		{"%", _print_percent},
		{NULL, NULL}
	};

	va_list args;

	va_start(args, format);
	if (!format)
		return (-1); /*falsy value used to check if format is empty*/

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else/*if %, we loop throught the stuct list above*/
		{
			for (j = 0; func_list[j].id != NULL; j++)
			{
				if (format[i + 1] == func_list[j].id[0])
				{
					len += func_list[j].func(args);
					break;
				}
			}
			i++;
		}
	}
	va_end(args);
	return (len);
}
