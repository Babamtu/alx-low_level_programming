#include "main.h"
#include <stddef.h>

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;
		p3 = haystack;
		while (*p3 && *p2 && (*p3 == *p2))
		{
			p3++;
			p2++;
		}
		if (!*p2)
			return (p1);
		if (!*p3)
			return (NULL);
		haystack++;
	}
	return (NULL);
}
