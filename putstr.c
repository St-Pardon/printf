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


/**
 * rev_string - reverses a str
 * @str: string to reverse
 */
void rev_string(char *str)
{
	int len, top;
	char tmp;

	for (len = 1; str[len]; len++)
		;

	for (top = 0; top < len; top++, len--)
	{
		tmp = str[len - 1];
		str[len - 1] = str[top];
		str[top] = tmp;
	}
}
