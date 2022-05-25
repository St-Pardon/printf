#include "main.h"

/**
 * _print_int - output int to stdio
 * @arg: param list
 * Return: num
 */
int _print_int(va_list arg)
{
	int len;

	len = print_number(arg);
	return (len);
}



/**
 * unsigned_int - Prints Unsigned ints
 * @arg: params
 * Return: int
 */
int unsigned_int(va_list arg)
{
	unsigned int len;

	len = va_arg(arg, unsigned int);

	if (len == 0)
		return (print_unsgined(len));

	if (len < 1)
		return (-1);
	return (print_unsgined(len));
}


/**
 * print_unsgined - Prints unsigned number
 * @num: param
 * Return: int
 */

int print_unsgined(unsigned int num)
{
	int half, len;
	unsigned int i;

	half = 1;
	len = 0;

	i = num;

	for (; i / half > 9; )
		half *= 10;

	for (; half != 0; )
	{
		len += _putchar('0' + i / half);
		i %= half;
		half /= 10;
	}

	return (len);
}
