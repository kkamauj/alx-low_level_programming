#include "main.h"
/**
  * print_most_numbers(void)- print numbers except some
  *
  * Return: Always 0
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 20; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
