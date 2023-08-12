#include <unistd.h>

/**
 * main - entry
 *
 * Description: new
 *
 * Return: 1
*/

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, s, 59);
	return (1);
}
