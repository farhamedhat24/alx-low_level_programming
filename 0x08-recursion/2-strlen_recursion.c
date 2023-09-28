#include"main.h"

/**
 * _strlen_recursion - calculates the length of the string pointed to by s,
 * @s: The string be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int lengt = 0;


	if (*s)
	{
		lengt++;
		lengt += _strlen_recursion(s + 1);
	}
	return (lengt);
}
