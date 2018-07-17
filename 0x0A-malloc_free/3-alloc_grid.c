#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - a function that returns a pointer to a 2d array
* @width: self explainatory. the rows.
* @height: probably not the width. the vert
*
* Description: make a width by height grid and then each index should be 0
* Return: the pointer or null if failure
* A: test cases if we get a 0 or negative size. return NULL
*/

int **alloc_grid(int width, int height)
{
	int **pointer;
	int *test;
	int i, j;

	if (width <= 0 || height <= 0)/* A */
		return (NULL);
	test = malloc((sizeof(int) * width * height));/* B */
	if (test == NULL)
		return (NULL);
	free(test);/* C */
	pointer = malloc(height * sizeof(int *));/* D */
	for (i = 0; i < width; i++)/* E */
	{
		pointer[i] = malloc(width * sizeof(int *));
	}
	for (i = 0; i < height; i++)/* F */
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	return (pointer);/* G */
}
