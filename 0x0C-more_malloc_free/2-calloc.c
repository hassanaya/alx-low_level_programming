#include "main.h"
#include <stdlib.h>

/**
 *_memset - returns void
 *@s: pointer
 *@b: int
 *@n: ubt
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 *_calloc - returns void
 *@nmemb: pointer
 *@size: int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	int totalSize = size * nmemb;

	if (size == 0 || nmemb == 0)
		return  (NULL);
	m = malloc(totalSize);

	if (m == 0)
		return (NULL);
	_memset(m, 0, size * nmemb);
	return (m);
}
