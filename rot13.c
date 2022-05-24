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

	_putchar('\0');
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
	int i, j, c;
	char *str1, *str;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char reved[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str1 = va_arg(arg, char *);
	for (i = 0; str1[i] != '\0'; i++)
		;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (-1);
	str = _cpymem(str, str1, i);
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 48; j++)
		{
			if (str[i] == normal[j])
			{
				str[i] = reved[j];
				break;
			}
		}
	}
	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	free(str);
	return (c);
}
