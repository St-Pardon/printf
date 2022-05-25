#include "main.h"

/**
 * _print_octal - prints octal base
 * @arg: param
 * Return: int
 */
int _print_octal(va_list arg)
{
	unsigned int num;
	int len;
	char *octal, *rev_str;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = binary_len(num, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal[len] = '\0';
	rev_str = rev_string(octal);
	if (rev_str == NULL)
		return (-1);

	_putbase(rev_str);
	free(octal);
	free(rev_str);
	return (len);
}

/**
 * _print_hex - Prints num on base16 lowercase
 * @arg: param
 * Return: int
 */
int _print_hex(va_list arg)
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
			rem = _hex_check(rem, 'x');
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
