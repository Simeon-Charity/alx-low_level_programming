#include "main.h"

/**
 * _isdigit - Checks for numbers 1-9.
 * @c: The character to be checked.
 *
 * Return: 1 if character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
