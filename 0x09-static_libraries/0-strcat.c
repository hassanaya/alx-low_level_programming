#include "main.h"

/**
 * _strcat - returns bool
 * @dest: pointer
 * @src: pointer
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count;

	for (count = 0 ; dest[count] != '\0' ; count++)
		;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
