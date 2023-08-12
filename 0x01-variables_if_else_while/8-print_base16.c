#include <stdio.h>

/**
 * main - entry
 * Description: u
 * Return: 0
*/

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d + '0');
		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');
	return (0);
}
