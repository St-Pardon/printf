#include "main.h"


/**
 * _putbase - sends characters to stdio
 * @str: param
 */
void _putbase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}


/**
 * _print_binary - Converts a num base 2
 * @list: param List
 * Return: int
 */
int _print_binary(va_list list)
{
	int num, i, len;
	char *str;

	num =  va_arg(list, unsigned int);
	len = binary_len(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_string(str);
	_putbase(str);
	free(str);
	return (len);
}
