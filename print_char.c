#include "main.h"
/**
 * _print_char - This prints 1 character like putchar
 * @arg: list of arguments
 * Return: int
 */
int _print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
