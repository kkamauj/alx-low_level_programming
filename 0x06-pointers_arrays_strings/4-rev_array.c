#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integer
 * @a: arr
 * @n: the number of elements of the array
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
