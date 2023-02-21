#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)

{

	char r;
	int i = 0;

	while (i <= 9)
	{
	for (r = 'a'; r <= 'z'; r++)
	{
	_putchar(r);
	}
	_putchar('\n');
	i++;
	}
}
