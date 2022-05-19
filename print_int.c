#include "main.h"

/**
 * _print_int - output int to stdio
 * @arg: param list
 * Return: num
 */
int _print_int(va_list arg)
{
	int n;
	int len;

	n = va_arg(arg, int);
	len = print_number(n);
	return (len);
}
