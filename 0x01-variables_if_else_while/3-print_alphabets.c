#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'e';
	char d = 'E';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
