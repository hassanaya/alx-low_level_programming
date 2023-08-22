#include "main.h"

/**
 * puts2 - returns bool
 * @str: pointer
 * Return: void
 */

void puts2(char *str)
{
	int open = 0;

	while (*str != '\0')
	{
		if (open % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		open++;
	}
	_putchar('\n');
}
