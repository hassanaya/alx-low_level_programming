#include "main.h"

/**
 * print_triangle - returns void
 * @size: int
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 1 ; j < size - i ; j++)
		{
			_putchar(' ');
		}
		for (j = 0 ; j <= i ; j++)  
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
