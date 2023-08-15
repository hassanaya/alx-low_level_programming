#include "main.h"

/**
 * print_last_digit - adf
 * @n: char
 * Return: 0
*/

int print_last_digit(int n)
{
	int lastNum;

	if (n < 0)
		lastNum = -1 * (n % 10);
	else
		lastNum = n % 10;
	_putchar(lastNum + '0');
	return (lastNum);
}
