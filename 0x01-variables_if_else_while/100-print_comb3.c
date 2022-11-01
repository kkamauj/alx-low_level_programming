#include <stdio.h>
/**
  * main - Entry Point
  *
  * Return: Always 0
  */
int main(void)
{
	/* two int variables*/
	int i, j;

	/*for each of i*/
	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
