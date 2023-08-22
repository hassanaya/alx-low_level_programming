#include "main.h"

/**
 * print_rev - returns bool
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
