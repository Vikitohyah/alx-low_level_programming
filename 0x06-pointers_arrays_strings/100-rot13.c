#include "main.h"

/**
 * rot13 - encoder 13
 * @s:pointer to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
	char a;
	char b;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] == datarot[b];
				break;
			}
		}
	}
	return (s);
}
