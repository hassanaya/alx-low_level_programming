#include "main.h"

/**
 * _strpbrk - returns bool
 * @s: pointer
 * @accept: pointer
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for  (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (i);
		}
	}
	return (NULL);
}
