#include "sort.h"

/**
* arraySwap - simple swap of int values for an array
* @array1: the first array position
* @array2: the second array position
*
* Return - none it is voiderinooooo
*/
void arraySwap(int *array1, int *array2)
{
	int temp;

	temp = *array1;
	*array1 = *array2;
	*array2 = temp;
}


/**
* lomuto_partition - a partition type. takes in an array and 2 positions
* @array: the array we want to split into 2
* @lo: the lower position pointer location
* @hi: the higher position pointer location
* @size: the total size of the array
*
* Return: the i + 1 position
*/
int lomuto_partition(int *array, int lo, int hi, size_t size)
{
	int x; /* holds last array value */
	int i; /* first "pointer location" */
	int j; /* second pointer location */

	x = array[hi]; /* the pivot, which is the last element */
	i = lo - 1; /* i starts at -1 */

	for (j = lo; j < hi; j++)
	{ /* for the length of the whole array, */
		if (array[j] < x)
		{ /* if the pivot is bigger than current element */
			i += 1; /* move up i, swap i and j */
			arraySwap(&array[i], &array[j]);

			if (i != j) /* if i is not j then print array */
				print_array(array, size);
		}
	}
	arraySwap(&array[i + 1], &array[hi]);
	if (i + 1 != j) /* print if we are not equal */
		print_array(array, size);
	return (i + 1);
}


/**
* quickie - the real algo from the wiki page
* @array: an array
* @lo: the lower index of the array
* @hi: the upper index of the array
* @size: the size for priting commands
*
* Return: voiderino
*/

void quickie(int *array, int lo, int hi, size_t size)
{
	int i;

	if (lo < hi)
	{ /* partitions and then recursively calls on itself */
		i = lomuto_partition(array, lo, hi, size);
		quickie(array, lo, i - 1, size);
		quickie(array, i + 1, hi, size);
	}
}


/**
* quick_sort - Uses quick sort to order an array of ints using Lomuto
* @array: the array of ints we want sorted
* @size: how big the A is
*
* Return: voiderino
*/

void quick_sort(int *array, size_t size)
{
	int flag = 0;
	size_t temp = 0;

	if (!array || size < 2)
		return;
	
	while (temp < size - 1)
	{
		if (array[temp] != array[temp+1])
			flag = 1;
		temp++;
	}

	if (flag == 1)
		quickie(array, 0, size - 1, size); /* call on my algo */
	/* arraySwap(&array[0], &array[1]); this works. just checking */
}
