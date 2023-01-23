#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *c;
va_start(list, n);
	va_list valist;
	unsigned int i;
	char *str;

for (i = 0; i < n; i++)
{
	c = va_arg(list, char*);
	if (c != NULL)
		printf("%s", c);
	else
		printf("(nil)");
	va_start(valist, n);

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

putchar('\n');
	printf("\n");
	va_end(valist);
}
