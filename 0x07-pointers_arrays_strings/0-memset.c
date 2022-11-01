#include "main.h"

/**
  * _memset - fills first @n bytes of memory with constant byte @b
  * @n: bytes to be filled starting from @s
  * @s: starting address of memory to be filled
  * @b: value in bytes to fill @n
  *
  * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
