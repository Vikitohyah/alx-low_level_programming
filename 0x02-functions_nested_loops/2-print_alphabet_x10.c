#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++ * 10;
	}
	_putchar('\n');
}
