#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
