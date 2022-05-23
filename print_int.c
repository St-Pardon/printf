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
