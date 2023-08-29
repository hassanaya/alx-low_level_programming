#include "main.h"

/**
 * _strstr - returns bool
 * @haystack: pointer
 * @needle: pointer
 * Return: int
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char start = needle[0];

	if (start != '\0')
	{
		for  (j = 0 ; haystack[j] != '\0' ; j++)
		{
			if (start  == haystack[j])
			{
				for (i = 1 ; ; i++)
				{
					if (needle[i] == '\0')
						return (haystack + j);
					if (haystack[i + j] == '\0')
						return (NULL);
					if (needle[i] != haystack[i + j])
					{
						break;
					}
				}
			}
		}
	}
	return (NULL);
}
