#include "main.h"
#include <stdlib.h>

/**
 *create_array - returns void
 *@size: int
 *@c: char
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
