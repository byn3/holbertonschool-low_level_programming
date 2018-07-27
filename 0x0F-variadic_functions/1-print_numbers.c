#include "variadic_functions.h"

/**
* print_numbers - prints the numbers followed by a new line
* @separator: the string printed between numbers
* @n: the number of arguments
*
* Description: basically gonna print stuff via srgarg stuff
* Return: prints stuff and no return cause void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listo;
	unsigned int i;

	va_start(listo, n);
	for (i = 0; i < n; i++)
	{
		(separator == NULL || i >=  n - 1) ?
		printf("%d", va_arg(listo, int)) :
		printf("%d%s", va_arg(listo, int), separator);
	}
	va_end(listo);
	printf("\n");
}
