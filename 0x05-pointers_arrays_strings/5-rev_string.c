#include "main.h"

/**
 * rev_string - returns bool
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0, j = 0;
	char temp;

	while (s[count])
		count++;
	for (j = 0 ; j < count / 2 ; j++)
	{
		temp = s[j];
		s[j] = s[count - j - 1];
		s[count - j - 1] = temp;
	}
}
