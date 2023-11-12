#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_value - variadic function
 * @string_array: string
 * @format: format of string
 *
 * gets the required argument
 *
 * Return: void *
*/
void print_value(va_list string_array, char format)
{
	char *temp;

	switch (format)
	{
		case 'i':
		printf("%d", va_arg(string_array, int));
		break;
		case 'f':
		printf("%f", va_arg(string_array, double));
		break;
		case 's':
		temp = va_arg(string_array, char *);
		if (temp == NULL)
		{
			temp = "(nil)";
		}
		printf("%s", temp);
		break;
		default:
		printf("%c", (char)va_arg(string_array, int));
		break;
	}
}
/**
 * print_all - variadic function
 * @format: list of types of arguments passed to the function
 * @...: arguments
 *
 * prints all arguments
 *
 * Return: void
*/
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	va_list string_array;

	va_start(string_array, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
			{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				print_value(string_array, format[i]);
				break;

			default:
				break;
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') &&
				format[(i + 1)] != '\0')
				printf(", ");
			i++;
	}

	va_end(string_array);
	printf("\n");
}
