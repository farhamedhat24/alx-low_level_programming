#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: number of bytes to allocatei
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
