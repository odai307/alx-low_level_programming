#include "main.h"
/**
 * jack_bauer - every minute of the day
 *
 * Return: 0
 */
int jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <=23)
	{
		while (minutes <= 59)
		{
			hours remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_purchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
