#include "main.h"

/**
 * more_numbers - returns void
 * Return: void
 */

void more_numbers(void)
{
	int i,  j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
