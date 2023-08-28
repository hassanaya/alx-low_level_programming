#include "main.h"

/**
 * _strchr - returns bool
 * @s: pointer
 * @c: pointer
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *result = NULL;


	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return (result);
}
