#include "main.h"

/**
 * _strcmp - returns bool
 * @s1: pointer
 * @s2: pointer
 * Return: pointer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ret = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	ret =((int) s1[i] - '0') -((int) s2[i] - '0');
	return (ret);
}
