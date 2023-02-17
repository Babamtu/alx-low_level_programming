#include <stdio.h>
/**
 *main - Entry point
 *
 * a program that prints all the numbers of base 16 in lowercase
 *Return: 0 (Success)
 */

int main(void)
{
	int a;

	char c;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	return (0);
}
