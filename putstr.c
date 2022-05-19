#include "main.h"
/**
 * _putstr - prints string to stdout
 * @arg: list of params
 * Return: int
 */

int _putstr(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
