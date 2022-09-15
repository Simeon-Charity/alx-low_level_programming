#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @c: The character to be checked.
 *
 * Return: last digit of the value
 */
int print_last_digit(int c)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
