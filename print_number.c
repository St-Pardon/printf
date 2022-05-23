#include "main.h"

/**
 * print_number - prints an integer
 * @args: param
 * Return: int
 */

int print_number(va_list args)
{
	int arg = va_arg(args, int);
	int len = 0, half = 1;
	unsigned int i;

	if (arg < 0)
	{
		len += _putchar('-');
		i = arg * -1;
	}
	else
		i = arg;

	while (i / half > 9)
		half *= 10;

	while (half != 0)
	{
		len += _putchar('0' + i / half);
		i %= half;
		half /= 10;
	}

	return (len);
}
