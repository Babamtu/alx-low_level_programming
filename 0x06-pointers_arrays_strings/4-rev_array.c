#include "main.h"

/**
*reverse_array - Reverses the content of an array of integers
*@a: An array of integers
*@n: Number of elements to swap
*
*Return: empty
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
