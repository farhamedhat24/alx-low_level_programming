#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers.
 * @argc: the number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
	if (!isdigit(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 2)
	{
		printf("0\n");
	}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
