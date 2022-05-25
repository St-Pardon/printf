#include "main.h"

/**
 * _print_reversed - reverse and print a string
 * @arg: param
 * Return: int
 */

int _print_reversed(va_list arg)
{
	int len;
	char *str, *ptr;

	str = va_arg(arg, char *);

	if (str == NULL)
		return (-1);

	ptr = rev_string(str);

	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);

	free(ptr);

	return (len);
}


/**
 * rot13 - Converts string to rot13
 * @arg: param
 * Return: int
 */

int rot13(va_list arg)
{
	int i, j;
	char  *str;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char reved[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == normal[j])
			{
				_putchar(reved[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}
