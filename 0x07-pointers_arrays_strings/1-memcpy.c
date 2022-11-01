#include "main.h"

/**
  * _memcpy - copies bytes to memory area @dest
  * @n: number of bytes to be copied
  * @src: memory area from which function copies
  * @dest: memory area to which function copies
  *
  * Return: a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
