#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
* strtow - a function that spits a 1d array of words into a 2d array
* @str: a string given by main
*
* Description: does stuff
* Return: an array of strings or null
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
	printf("size of pointer first is : %lu \n ", sizeof(pointer));
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
	printf("size of pointer now is: %lu \n ", sizeof(pointer));
	for (i = 0, a = 0, b = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\0' &&
		a < wordCount && 
		(str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			pointer[a][b] = str[i];
			a++;
			b = 0;
		}
		if (str[i] != ' ')
		{
			pointer[a][b] = str[i];
			b++;
		}
	}
	pointer = malloc(sizeof(char));
	pointer[a][b] = '\0';
	for (i = 0; pointer[i]; i++)
		printf("each pointer index is: %p \n ", pointer[i]);
	return (pointer);
}
