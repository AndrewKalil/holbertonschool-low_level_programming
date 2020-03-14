#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as arguements
 * @separator: string of comman and space printed after a number
 * @n: number of arguemnts passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	while (i < n)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
			s = "(nil)";
		if ((separator == 0) || (separator != 0 && i == 0))
			printf("%s", s);
		else
			printf("%s%s", separator, s);
		i++;
	}
	va_end(ap);

	printf("\n");
}
