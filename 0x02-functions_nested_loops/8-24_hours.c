#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int min1;
	int min2;
	int totalmins = 0;

	for (hour1 = '0'; hour1 < '3'; hour1++)
	{
		for (hour2 = '0'; hour2 <= '9'; hour2++)
		{
		for (min1 = '0'; min1 < '6'; min1++)
		{
		for (min2 = '0'; min2 <= '9'; min2++)
		{
		if (totalmins < 1440)
		{
		_putchar(hour1);
		_putchar(hour2);
		_putchar(':');
		_putchar(min1);
		_putchar(min2);
		_putchar('\n');
		totalmins++;
		}
		}
		}
		}
	}
}
