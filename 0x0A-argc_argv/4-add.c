#include <stdio.h>
#include <stdlib.h>

/**
 * isStringInt - entry
 * @str: array
 * Return: 0
 */

int isStringInt(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);
	if (*str != '\0' && *endptr == '\0')
		return (1);
	return (0);
}

/**
 * main - entry
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i, res = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!isStringInt(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
