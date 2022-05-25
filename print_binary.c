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
	unsigned int num;
	int i, len;
	char *str, *rev;

	num =  va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = binary_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

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

/**
 * _print_heX - Prints decimal number on base16 Uppercase
 * @arg: strct param
 * Return: int
 */
int _print_heX(va_list arg)
{
	unsigned int num;
	int len, rem;
	char *hex_rep, *rev_hex;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = binary_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = _hex_check(rem, 'X');
			hex_rep[len] = rem;
		}
		else
			hex_rep[len] = rem + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	_putbase(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * _hex_check - Calls hex function
 * @num: param
 * @x: param
 * Return: int
 */
int _hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
