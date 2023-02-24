#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @r: The number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int r)

{

	if (r >= 48 && r <= 57)
	{
	return (1);
	}
	return (0);
}
