#include "main.h"

/**
 * _strncat - Concatanate a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
