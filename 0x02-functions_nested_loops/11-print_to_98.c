#include "main.h"

/**
 * print_to_98 - adf
 * @x: int
 * Return: 0
*/

void print_to_98(int n)
{
	int num;

	if (num < 98)
	{
		for (num = n  ; num < 98 ; num++)
		{
			printf("%i, ", num);
		}
	}
	else if (num > 98)
	{
		for (num = n ; num > 98 ; num--)
		{
			printf("%i, ", num);
		}
	}
	printf("98/n");
}
