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
	int caps = 0;

	while (s[i] != 0)
	{
		if (s[i] == '\t')/* A */
			caps = 1;
		else if (s[i] == '.' || s[i] == ' ' || s[i] == '\n')/* B */
			caps = 1;
		else if (s[i] == ',' || s[i] == ';' || s[i] == '!')/* B */
			caps = 1;
		else if (s[i] == '?' || s[i] == '"' || s[i] == '(')/* B */
			caps = 1;
		else if (s[i] == ')' || s[i] == '{' || s[i] == '}')/* B */
			caps = 1;
		else if (caps == 1 && (s[i] <= 97 || s[i] >= 122))/* C */
			caps = 0;
		if (caps == 1 && s[i] >= 97 && s[i] <= 122)/* D */
		{
			s[i] -= 32;
			caps = 0;
		}
		i++;
	}
	return (s);
}
