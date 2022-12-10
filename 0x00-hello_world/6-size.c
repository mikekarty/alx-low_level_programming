#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int j;
	long long int k;
	char m;
	float n;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));

	return (0);
}
