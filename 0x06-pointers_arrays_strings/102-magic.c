#include <stdio.h>

/**
 * main - a function that prints the function at a[2]
 *
 * Return: 0
 */

int main(void)
{
	int a[] = {5, 9, 98, 5};
	int *p = &a[2];

	*(p) = 98;

	printf("a[2] = %d\n", *p);

	return (0);
}
