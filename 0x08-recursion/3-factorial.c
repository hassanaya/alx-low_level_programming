#include "main.h"

/**
 * factorial - returns bool
 * @n: pointer
 * Return: pointer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
