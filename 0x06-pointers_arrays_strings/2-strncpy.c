#include "main.h"
#include <stdio.h>

/**
  * _strncpy - copies string
  * @dest: destination
  * @src: source
  * @n: length of int
  *
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
