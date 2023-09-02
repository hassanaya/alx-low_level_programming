#include "main.h"

/**
 * _strncat - returns bool
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, count;

	for (count = 0 ; dest[count] != '\0' ; count++)
		;
	while (src[i] != '\0' && n != 0)
	{
		dest[count] = src[i];
		count++;
		i++;
		n--;
	}
	dest[count] = '\0';
	return (dest);
}
