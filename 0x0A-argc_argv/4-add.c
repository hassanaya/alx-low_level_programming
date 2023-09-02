#include <stdio.h>
#include <stdlib.h>

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
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", res);
	return (0);
}
