#include "main.h"

/**
 * puts_half - returns bool
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0 , j;

	while (str[count])
		count++;
	count++;
	for (j = count / 2 ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
