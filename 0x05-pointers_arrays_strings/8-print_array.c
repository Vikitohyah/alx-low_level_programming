#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array
 * @a: The array
 * @n: number of array element to print
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
