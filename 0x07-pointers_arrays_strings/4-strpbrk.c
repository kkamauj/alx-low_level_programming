#include "main.h"
/**
  * _strpbrk - searches a string for any of the bytes in @accept
  * @s: string which is searched by the function
  * @accept: bytes of which are searched against @s
  *
  * Return: pointer to the byte in @s matching one in accept, or NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
