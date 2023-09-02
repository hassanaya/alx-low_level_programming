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
	int num1, num2, res = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
