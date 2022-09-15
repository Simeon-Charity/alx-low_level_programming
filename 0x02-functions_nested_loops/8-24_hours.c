#include "main.h"

/**
 * jack_bauer - Prints minute of every day
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = '00'; hour <= '23'; hour++)
	{
		for (minute = '00'; minute <= '59'; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
