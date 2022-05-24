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
 * @args: param List
 * Return: int
 */
int _print_binary(va_list args)
{
	long int num;
	int i, len;
	char *str, *rev;

	num =  va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	len = binary_len(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev = rev_string(str);
	if (rev == NULL)
		return (-1);

	_putbase(str);
	free(str);
	free(rev);
	return (len);
}
