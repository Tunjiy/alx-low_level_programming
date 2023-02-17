#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
