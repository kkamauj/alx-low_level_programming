#include "main.h"
/**
  * _strspn - gets length of a prefix sustring
  * @s: string to evaluate
  * @accept: contains characters to match ins
  *
  * Return: numbers of bytes in s
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, l;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (l = 0; accept[l] != '\0'; l++)
			{
				if (s[j] == accept[l])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}
