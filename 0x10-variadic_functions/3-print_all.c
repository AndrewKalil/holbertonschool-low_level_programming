#include "variadic_functions.h"

/**
 * print_all - prints any kind of arguemnts being passed on
 * @format: list of arguement types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";
	va_list ap;

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
