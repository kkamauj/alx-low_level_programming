#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: A program that prints
 * all possible different combinations of three digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (y > x && z > y)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);

					if (x != 7 && y < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
