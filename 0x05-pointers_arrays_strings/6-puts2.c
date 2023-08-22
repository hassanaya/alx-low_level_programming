#include "main.h"

/**
 * puts2 - returns bool
 * @str: pointer
 * Return: void
 */

void puts2(char *str)
{
	bool open = true;

	while (*str != '\0')
	{
		if (open)
		{
			_putchar(*str);
			open = false;
		}
		else
		{
			open = true;
		}
	}
}
