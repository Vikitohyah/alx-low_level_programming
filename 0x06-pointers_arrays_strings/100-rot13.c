#include "main.h"

/**
 * rot13 - encodes using rot13
 * @s:pointer to string parameters
 * Return: encoded strings
 */
char *rot13(char *s)
{
	int a;
	int b;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alphabet[b])
			{
				s[a] == rot13key[b];
				break;
			}
		}
	}
	return (s);
}
