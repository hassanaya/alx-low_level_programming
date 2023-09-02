#include "main.h"

/**
 * _memcpy - returns bool
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ;  i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
