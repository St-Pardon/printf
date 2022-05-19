#include "main.h"
/**
 * _putstr - prints string to stdout
 * @str: params
 * Return: int
 */

int _putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
