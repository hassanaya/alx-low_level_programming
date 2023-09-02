#include "main.h"

/**
 * _strcpy - returns bool
 * @src: pointer
 * @dest: pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
