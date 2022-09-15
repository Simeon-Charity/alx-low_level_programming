#include "main.h"

/**
 * Main - Print the alphabet in lowercase
 *
 * Return: 1 ifcharacter is lowercase and 0 otherwise
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
