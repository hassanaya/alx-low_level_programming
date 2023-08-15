#include "main.h"

/**
 * print_times_table - adf
 * @n:
 * Return: 0
*/

void print_times_table(int n)
{
	int h, m;

	for (h  = 0 ; h <= n ; h++)
	{
		_putchar('0');
		for (m = 1 ; m  <= n ; m++)
		{
			int mul = h * m;

			_putchar(',');
			_putchar(' ');
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul  + '0');
			}
			else if (mul < 100)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				int hun = (mul / 100), ten;

				_putchar(hun + '0');
				ten = (mul - (hun * 100)) / 10;
				_putchar(ten + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
