#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: int argument
 * @argv: pointer to array of string arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
