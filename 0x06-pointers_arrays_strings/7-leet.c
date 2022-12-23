#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int a1 = 0, a2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++a1])
	{
		for (a2 = 0; a2 <= 7; a2++)
		{
			if (str[a1] == leet[a2] || str[a1] - 32 == leet[a2])
				str[a1] = a2 + '0';
		}
	}
	return (str);
}
