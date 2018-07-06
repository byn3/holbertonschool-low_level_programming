#include "holberton.h"

/**
* leet - a function that encodes a string into 1337
* @s: a pointer string given by main
*
* Description: changes 'let' to '137' o to 0
* Return: the char array
*/

char *leet(char *s)
{
	int i;
	int j;
	int array[5][3] = {[97, 65, 52],
	[101, 69, 51],
	[108, 76, 49],
	[111, 79, 48],
	[116, 84, 55]};/* AELOT */

	while (s[i] != 0)
	{
		for(j = 0 ; j < 2; j++)
			if (s[i] == array[i][j])
				s[i] == array[i][2];
		i++;
	}
}
