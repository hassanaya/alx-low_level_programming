#include "main.h"

/**
 * print_alphabet_x10 - adf
 * Return: 0
*/

void print_alphabet_x10(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
