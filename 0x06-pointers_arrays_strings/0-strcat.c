#include "main.h"

/**
 * _strcat - a function that concatanates two strings
 * @src: string to appended
 * @dest: destination string
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dlen = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
