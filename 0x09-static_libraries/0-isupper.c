#include "main.h"

/**
 * _isupper - returns bool
 * @c: character
 * Return: bool
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
