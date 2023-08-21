#include "main.h"

/**
 * _strlen - returns bool
 * @s: pointer
 * Return: void
 */

int _strlen(char *s)
{
	int counter = 0;
	for (counter = 0 ; *s != '\0' ; s++)
		counter++;
	return counter;
	
}
