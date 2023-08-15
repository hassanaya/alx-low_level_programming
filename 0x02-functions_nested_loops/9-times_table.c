#include "main.h"

/**
 * times_table - adf
 * Return: 0
*/

void times_table(void)
{
	int h, m;

	for (h  = 0 ; h < 10 ; h++)
	{
		for (m = 0 ; m  < 10 ; m++)
		{
			int mul = h * m;

			if (mul < 10)
				_putchar(mul  + '0');
			else
			{
				_putchar((mul / 10) + '0'); 
				_putchar((mul % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
