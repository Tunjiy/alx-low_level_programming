#include "main.h"
#include <stdio.h>

/**
 *  _strcat - Concatenates two strings
 *  @dest: The destination string
 *  @src: The source string
 *  Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlenth++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dest[dlenth] = src[i];
		dlen++;
	}

	dest[dlenth] = '\0';
	return (dest);
}
