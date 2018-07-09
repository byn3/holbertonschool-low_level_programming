#include "holberton.h"

/**
* cap_string- capitalizes all words
* @s: a pointer that main will give
*
* Description: cap all words after a space and period
* Return: returns the char pointer
* A: if we have a tab we caps and not change to a space
* B: if we have a space or period, caps is true
*	or if we have a newline, ;, !, ?, ", (, ), {, and }
* C: if caps is true and we found a lowercase then upper it
* D: if caps is true but we dont have a lowercase letter then reset to 0
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != 0)
	{
		while (s[i] == '\t' || s[i] == '.' || s[i] == ' ' ||
s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?'
|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)/* D */
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
