#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, separator = ',';

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i + 1] == '\0')
			separator = '\0';

		if (format[i] == 'c')
			printf("%c%s", va_arg(args, int), separator == '\0' ? "" : ", ");
		else if (format[i] == 'i')
			printf("%d%s", va_arg(args, int), separator == '\0' ? "" : ", ");
		else if (format[i] == 'f')
			printf("%f%s", va_arg(args, double), separator == '\0' ? "" : ", ");
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", (str ? str : "(nil)"), separator == '\0' ? "" : ", ");
		}
		else
			separator = '\0';

		i++;
	}

	printf("\n");

	va_end(args);
}
