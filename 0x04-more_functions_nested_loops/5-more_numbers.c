#include "holberton.h"

/**
 * more_numbers - prints number from 0 to 14
 * followd by a new line 10 times
 */
void more_numbers(void)
{
	char num;
	int TenTimes;

	for (TenTimes = 48; TenTimes <= 57; TenTimes++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar (num % 10 + '0');
		}
		_putchar ('\n');
	}
}
