#include "main.h"
#include <stdlib.h>

/**
 *str_concat - returns void
 *@s1: pointer
 *@s2: pointer
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size2 = 0, i = 0, size1 = 0;
	char *m;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (; s1[size1] != '\0' ; size1++)
	;
	for (; s2[size2] != '\0' ; size2++)
		;
	m = malloc(size1 + size2 + 1);
	if (m == 0)
		return (0);
	for (; i < size1 + size2 ; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
