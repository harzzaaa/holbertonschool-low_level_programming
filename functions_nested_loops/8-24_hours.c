#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * 00:00 to 23:59
 * Return: Jack Bauer's Journey
*/

void jack_bauer(void)
{
	int minut, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minut = 0; minut <= 59; minut++)
		{
			_putchar((hour / 10 ) + '0');
			_putchar((hour % 10 ) + '0');
			_putchar(':');
			_putchar((minut / 10) + '0');
			_putchar((minut % 10) + '0');
			_putchar('\n');
		}
	}
}
