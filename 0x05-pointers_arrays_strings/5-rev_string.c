#include "main.h"

/**
 * print_rev - returns bool
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0, j = 0;
	char temp;

	while (s[count])
		count++;
	for (j = 0 ; j < count / 2 ; j++)
	{
		temp = s[j];
		s[j] = s[count - j - 1];
		s[count - j - 1] = temp;
	}
	_putchar('\n');
}
