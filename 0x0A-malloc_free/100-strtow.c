#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
*
*/

char **strtow(char *str)
{
	char **pointer;
	int wordCount = 0;
	int stringLength = 0;
	int i = 0;
	int a = 0;
	int b = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			wordCount++;
		if (str[i] != ' ' && str[i + 1] == '\0')
			wordCount++;
	}
	printf("word count is : %d \n ", wordCount);
	pointer = malloc(sizeof(char *) * wordCount);
	printf("size of pointer first is : %d \n ", pointer);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0, a = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			stringLength = 0;
		if (str[i] != ' ')
			stringLength++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			pointer[a] = malloc(sizeof(char) * stringLength + 1);
			a++;
		}
	}
	printf("size of pointer now is: %d \n ", sizeof(pointer));
	for (i = 0, a = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			pointer[a][b] = str[i];
			b++;
		}
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			pointer[a][b] = '\0';
			a++;
		}
	}
	return (pointer);
}
