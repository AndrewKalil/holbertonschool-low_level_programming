#include "variadic_functions.h"

/**
 * print_numbers - prints integers passes as arguents
 * @separator: string containing comman and space
 * @n: number of arguements being passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		if ((separator == 0) || (separator != 0 && i == 0))
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
		i++;
	}
	va_end(ap);

	printf("\n");
}
