#include "main.h"

/**
 * print_alphabet - adf
 * Return: 0
*/

void print_alphabet(void)
{
	char c = 'a';
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
