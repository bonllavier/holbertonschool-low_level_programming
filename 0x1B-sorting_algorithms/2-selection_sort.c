#include "sort.h"

/**
 *selection_sort - insert
 *@array: list
 *@size: size
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int min_idx;

	if (array != NULL && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min_idx = i;
			for (j = i + 1 ; j < size ; j++)
				if (array[j] < array[min_idx])
				{
					min_idx = j;
				}

			swap(&array[min_idx], &array[i], array, size);
		}
	}
}

/**
 *swap - swap
 *@xp: index1
 *@yp: index2
 *@array: list
 *@size: size
 * Return: Always 0
 */
void swap(int *xp, int *yp, int *array, size_t size)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	if (*xp != *yp)
		print_array(array, size);
}
