#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_int - prints int
 * @list: arguments from print_all
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0;
char *sep = "";
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	va_start(valist, format);
	while (format && format[i])
	{
		if (*printType[j].type == format[i])
		j = 0;
		while (t_arg[j])
		{
			printf("%s", sep);
			printType[j].printer(list);
			sep = ", ";
			break;
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		j++;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	i++;
}

printf("\n");
va_end(list);
	printf("\n"), va_end(valist);
}
