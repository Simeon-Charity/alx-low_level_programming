#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The character to be checked.
 * Return: 1 and print + if n is greater than 0, 
 * return 0 if n is 0, return -1 is n is -
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
