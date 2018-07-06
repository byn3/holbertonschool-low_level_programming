#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: a pointer given by the main function
* @s2: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns 0 if strings match and no errors
* I found the answers on the man page
* A: count how long the first passed in string is
* B: do the loop only if s1 is not the null character
*	and if result is zero, meaning no differences
*	and if we are less than or equal to the length of the string
* C: if a difference in values is encountered, do the code
*	so we will get the difference and break
* D: same as C. dunno why i put D here.
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;
	int counter = 0;

	while (s1[counter] != 0)/* A */
		counter++;

	while (s1 != 0 && result == 0 && i <= counter)/* B */
	{
		if (s1 != s2)/* C */
		{
			result = s1[i] - s2[i];
			break;/* D */
		}
		i++;
	}
	return (result);
}
