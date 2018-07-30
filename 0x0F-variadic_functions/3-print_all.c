#include "variadic_functions.h"

/**
* print_all - this can print anything!!!
* @format: nah jk. not anyting. only what I allow
*
* Description: I am only allowing chars, int, float, strings
* Return: NONE IT IS VOID WE PRINT STUFF THOUGH
*/

void print_all(const char * const format, ...)
{
	va_list santa;
	int i = 0;
	char *s;
	int flag = 0;

	va_start(santa, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)  va_arg(santa, int));
			flag = 1;
			break;
		case 'i':
			printf("%i", va_arg(santa, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", (float) va_arg(santa, double));
			flag = 1;
			break;
		case 's':
			s = va_arg(santa, char *);
			if (s == NULL)
			{
				printf("(nil)");
				flag = 1;
				break;
			}
			printf("%s", s);
			flag = 1;
			break;
		}
		if (format[i + 1] != 0 && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	va_end(santa);
	printf("\n");
}
