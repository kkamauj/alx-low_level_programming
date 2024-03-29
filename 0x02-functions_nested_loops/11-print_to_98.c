#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: number from which to print to 98
 * Description: same as function
 *
 * Return: return result
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
