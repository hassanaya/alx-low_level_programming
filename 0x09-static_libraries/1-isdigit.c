#include "main.h"

/**
 * _isdigit - returns bool
 * @c: character
 * Return: bool
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
