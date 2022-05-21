#include "main.h"

/**
 * int_length - gets the lenght of a number
 * @n: param
 * Return: int
 */

int int_length(unsigned int n)
{
	int count;

	for (count = 0; n > 0; count++)
	{
		n = n / 10;
	}
	return (count);
}

/**
 * get_exponent - Calculates the exponent of a number
 * @len: lenght of number
 * Return: the exponent
 */
int get_exponent(int len)
{
	int exponent;

	for (exponent = 1; len > 1; len--)
		exponent = exponent * 10;
	return (exponent);
}

/**
 * binary_len - gets the length of binary number
 * @n: param
 * Return: int
 */

int binary_len(unsigned int n)
{
	int len;

	for (len = 0; n > 0; len++)
	{
		n = n / 2;
	}
	return (len);
}
