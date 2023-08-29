#include "main.h"

/**
 * _strchr - returns bool
 * @s: pointer
 * @c: pointer
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
