#include "holberton.h"

/**
* _strstr - a function that locates a substring
* @haystack: a char pointer given by main
* @needle: a char pointer given by main
*
* Description: find the first occurance of the substring
*	returns the pointer to the beginning of the located substring
* Return: returns null if no match or the match if pattern matches
*/

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *pattern;

	while (*haystack)
	{
		start = haystack;
		pattern = needle;

		while (haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (*pattern == 0)
			return (start);
		haystack = start + 1;
	}
	return (0);
}
