#include "holberton.h"

/**
* *_strcpy - a function that copies the src string to dest
* @dest: a buffer that will store src, including null char
* @src: a string
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns the pointer to dest.
* we are given a char destination and a source
* we count how long the string is
* we loop from 0 to the str length
* we make the destination be the source
* essentially its just copying over the array index
* we return the array dest and main will print it
* in main, dest is s1 and p is src
*/

char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (src[counter] != 0)
		counter++;
	for (i = 0; i < counter; i++)
		dest[i] = src[i];
	return (dest);
}
