#include "main.h"

/**
 * _strspn - returns bool
 * @s: pointer
 * @accept: pointer
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for  (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
