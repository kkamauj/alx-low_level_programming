#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: bytes
 *
 * Return: pointer allocated memory
 * if malloc fails, status is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
