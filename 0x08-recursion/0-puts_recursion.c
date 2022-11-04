#include "main.h"
/**
  * _puts_recursion - function that prints a string
  * @s: string to be printed
  *
  * Return: aLways 0 if successful
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
