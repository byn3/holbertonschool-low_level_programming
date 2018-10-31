#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int array[] = {1, 1, 1, 1, 1, 1, 1};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);

	printf("________________________________________\n");

	int array1[] = {19, 19, 19, 1};

	n = sizeof(array1) / sizeof(array1[0]);

	print_array(array1, n);
	printf("\n");
	quick_sort(array1, n);
	printf("\n");
	print_array(array1, n);

	printf("________________________________________\n");


	int array2[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	n = sizeof(array2) / sizeof(array2[0]);

	print_array(array2, n);
	printf("\n");
	quick_sort(array2, n);
	printf("\n");
	print_array(array2, n);

	return (0);
}
