#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program uses the sizeof operator
 * to print the size of various data types
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
