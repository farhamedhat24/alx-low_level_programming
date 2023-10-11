#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name is given
 * @f: a pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
