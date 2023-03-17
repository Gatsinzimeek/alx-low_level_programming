#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	long long int c;
	
	printf("Size of a char: %zu bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
