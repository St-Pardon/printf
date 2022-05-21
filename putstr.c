#include "main.h"
/**
 * _putstr - prints string to stdout
 * @arg: list of params
 * Return: int
 */

int _putstr(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (!str)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}


/**
 * rev_string - reverses a str
 * @str: string to reverse
 * Return: char pointer
 */
char *rev_string(char *str)
{
	int len, top;
	char tmp, *dest;

	for (len = 1; str[len] != '\0'; len++)
		;

	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	_cpymem(dest, str, len);

	for (top = 0; top < len; top++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[top];
		dest[top] = tmp;
	}
	return (dest);
}


/**
 * _cpymem - copies memory
 * @dest: parm pointer
 * @src: param poiter
 * @n: param
 * Return: poiter
 */
char *_cpymem(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
