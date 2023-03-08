#include "main.h"

/**
  * _puts_recursion - Print a string followed by a new line
  * @st: the string to print
  *
  * Return: Nothing.
  */
void _puts_recursion(char *st)
{
	if (*st == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*st);
	st++;
	_puts_recursion(st);
}
