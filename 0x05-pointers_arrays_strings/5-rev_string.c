#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string inputed
 * Return: string
 */
void rev_string(char *s)
{
	int a, b, c, temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	c = a - 1;

	while (b < c)
	{
		temp = s[a];
		s[b] = s[c];
		s[c] = temp;
		b++;
		c--;
	}
}
