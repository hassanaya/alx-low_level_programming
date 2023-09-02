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
	int i, lc = 0, m;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		m = atoi(argv[1]);
		for (i = 0 ; i < 5 ; i++)
		{
			if (m >= cents[i])
			{
				lc += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
