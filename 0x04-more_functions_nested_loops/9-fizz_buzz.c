#include "main.h"

/**
 * FizzBuzz - returns void
 * Return: void
 */

void FizzBuzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 && i % 5)
			printf("FizzBuzz");
		else if (i % 3)
			printf("Fizz");
		else if (i % 5)
			printf("Buzz");
		else
			printf(i);
		_putchar(' ');
	}
	_putchar('\n');
}
