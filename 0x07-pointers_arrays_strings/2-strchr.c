#include "main.h"
/**
  * _strchr - locates a character @c in a string @s
  * @c: character to e located
  * @s: string in which @c is located
  *
  * Return: pointer to first occurrence of @c or NULL if not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
