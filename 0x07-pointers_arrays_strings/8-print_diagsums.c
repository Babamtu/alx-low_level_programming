#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;


	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + i);
	}


	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (i * size) + (size - i - 1));
	}

	printf("Sum of first diagonal: %d\n", sum1);
	printf("Sum of second diagonal: %d\n", sum2);
}
