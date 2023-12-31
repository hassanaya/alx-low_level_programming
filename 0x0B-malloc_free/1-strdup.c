#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns void
 *@str: pointer
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0' ; size++)
	;
	m = malloc(size + 1);
	if (m == 0)
		return (0);
	for (; i < size ; i++)
		m[i] = str[i];
	return (m);
}
