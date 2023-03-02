#include "main.h"

/**
 * _strncat - a function that cconcatanates dest and src
 * @src: source file
 * @dest: destinatioon file
 * @n: the copy limit
 * Return: a pointer to the destination file
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
