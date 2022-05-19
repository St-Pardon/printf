#include "main.h"

/**
 * print_number - prints an integer
 * @n: param
 * Return: int
 */

int print_number(int n)
{
	int len;
	unsigned int i, j, k, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	k = i;
	j = i;
	count = 1;

	for (len = 0; k > 0; len++)
		k = k / 10;


	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}

	return (len);
}
