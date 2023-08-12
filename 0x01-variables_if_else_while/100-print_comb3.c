#include <stdio.h>

/**
 * main - entry
 * Description: u
 * Return: 0
*/

int main(void)
{
	int d = 0;

	for (int i = 0 ; i < 9 ; i++)
	{
		for (int j  = i + 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
