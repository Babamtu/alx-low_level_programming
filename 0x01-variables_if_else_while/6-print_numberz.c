#include <stdio.h>
/**
 *main -Entry point
 *
 *a program to print all numbers with putchar
 *Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = '0';
	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	putchar('\n');
	return (0);
}
