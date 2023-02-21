#include "main.h"

/**
 * _abs - calculate the absolute value of an integer.
 * @r: The number to be computed.
 * Return: absolute value of number or zero
 */

int _abs(int r)

{

	if (r < 0)
	{
	int abs_val;

	abs_val = r * -1;
	return (abs_val);
	}
	return (r);
}
