#include "variadic_functions.h"

/**
* print_strings - prints a string followed by a new line
* @separator: the character that will separate values
* @n: the number of args
*
* Description: acts like printf %s i hope
* Return: NONE IT IS VOIDDD
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listo;
	unsigned int i;
	char *str;

	va_start(listo, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(listo, char *);
		if (str == NULL)
			printf("(nil)");
		if ((separator == NULL || i >= n - 1) && str != NULL)
			printf("%s", str);
		if (separator != NULL && i < n - 1 && str != NULL)
			printf("%s%s", str, separator);
	}
	va_end(listo);
	printf("\n");
}
