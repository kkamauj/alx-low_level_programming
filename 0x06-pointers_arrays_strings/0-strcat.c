#include "main.h"
#include <stdio.h>

/**
  * *_strcat - concatenates two strings
  * @dest: pointer to destination
  * @src: pointer to source
  *
  * Return: Always 0;
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
