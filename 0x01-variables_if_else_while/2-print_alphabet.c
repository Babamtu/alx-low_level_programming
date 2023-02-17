#include <stdio.h>
/**
 *main - Entry point
 *
 *Program that prints lowercase alphabets using putchar
 *Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
