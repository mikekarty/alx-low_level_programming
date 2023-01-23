#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
	va_list valist;
	unsigned int i;

va_start(list, n);
	va_start(valist, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(list, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

putchar('\n');
	printf("\n");
	va_end(valist);
}
