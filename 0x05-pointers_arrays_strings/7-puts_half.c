#include "main.h"

/**
 * puts_half - returns bool
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0 , j;

	while (s[count])
		count++;
	count++;
	for (j = count / 2 ; s[j] != '\0' ; j++)
	{
		_putchar(s[j]);
	}
}
