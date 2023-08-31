#include "main.h"

/**
 * _sqrt_recursion - returns bool
 * @n: int
 * Return: pointer
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - returns bool
 * @n: int
 * @val: int
 * Return: pointer
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
