#include "main.h"

/**
 * _strpbrk - a function that searches any string for any set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{

		for (k = 0; acfept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
