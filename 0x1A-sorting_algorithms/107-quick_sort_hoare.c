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
* hoare_partition - a partition type. takes in an array and 2 positions
* @array: the array we want to split into 2
* @lo: the lower position pointer location
* @hi: the higher position pointer location
* @size: the total size of the array
*
* Return: the i + 1 position
*/
int hoare_partition(int *array, int lo, int hi, size_t size)
{
	int pivot; /* holds last array value */
	int i; /* first "pointer location" */
	int j; /* second pointer location */

	pivot = array[hi]; /* the pivot, which is the last element */
	i = lo - 1; /* i starts at -1 */
	j = hi + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i < j)
		{
			arraySwap(&array[i], &array[j]);
			print_array(array, size);
		}
		else
		{
			if (i == j)
				return (j - 1);
			return (j);
		}
	}
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
	int pivot;

	if (lo >= hi)
		return;
	/* partitions and then recursively calls on itself */
	pivot = hoare_partition(array, lo, hi, size);
	quickie(array, lo, pivot, size);
	quickie(array, pivot + 1, hi, size);

}


/**
* quick_sort_hoare - Uses quick sort to order an array of ints using Lomuto
* @array: the array of ints we want sorted
* @size: how big the A is
*
* Return: voiderino
*/

void quick_sort_hoare(int *array, size_t size)
{
	/* int flag = 0; */
	/* size_t temp = 0; */

	if (!array || size < 2)
		return;

/*
*	while (temp < size - 1 && flag == 0)
*	{
*		if (array[temp] != array[temp + 1])
*			flag = 1;
*		temp++;
*	}
*/
	/* if (flag == 1) */
		quickie(array, 0, size - 1, size); /* call on my algo */
	/* arraySwap(&array[0], &array[1]); this works. just checking */
}
