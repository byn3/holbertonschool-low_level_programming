#include "holberton.h"

/**
* rev_string - prints a string in reverse
* @s: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: is void. no return.
* I tried a sizeof(s) strat at first. testing
* So to swap and reverse the strings i have
* a counter variable which will be for the end
* and an i variable which will start at 0, the beginning,
* and while counter is greater than i,
* we store the i index into swap, then we make the i index equal
* to the counter index which should be the end
* and we then put swap into counter which should have
* effectively swapped the two. repeat until we hit the middle
* because we already swapped the beginning and ends.
* the middle is the last indices swapped
*/

void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	char swap;

	while (s[counter] != '\0')
		counter++;
	counter -= 1;
	while (counter > i)
	{
		swap = s[i];
		s[i] = s[counter];
		s[counter] = swap;
		counter--;
		i++;
	}
}
