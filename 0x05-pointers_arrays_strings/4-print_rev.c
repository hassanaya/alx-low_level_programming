#include "main.h"

/**
 * print_rev - returns bool
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int count = _strlen(s);

	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
	_putchar('\n');
}
