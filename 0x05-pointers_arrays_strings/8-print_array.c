#include "main.h"

/**
 * print_array - returns bool
 * @a: pointer
 * @n: int
 * Return: void
 */

void print_array(int *a, int n
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
