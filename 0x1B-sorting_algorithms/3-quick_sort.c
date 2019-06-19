#include "sort.h"

/**
 *selection_sort - insert
 *@array: list
 *@size: size
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL && size >= 2)
	{
		recur_sort(array, 0, size - 1, size);
	}
}
/**
 *recur_sort - recursion start
 *@array: array
 *@low: low
 *@high: high
 *@size: size
 * Return: Always 0
 */
void recur_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int partit = partition(array, low, high, size);

		recur_sort(array, low, partit - 1, size);
		recur_sort(array, partit + 1, high, size);
	}
}
/**
 *partition - limiter
 *@arr: array
 *@low: low
 *@high: high
 *@size: size
 * Return: Always 0
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j = 0;

	for (j = low ; j <= high - 1 ; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap_quick(&arr[i], &arr[j]);
			if (&arr[i] != &arr[j])
			{
				print_array(arr, size);
			}
		}
	}
	swap_quick(&arr[i + 1], &arr[high]);
	if (&arr[i + 1] != &arr[high])
	{
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 *swap_quick - swap
 *@x: index
 *@y: index2
 * Return: Always 0
 */
void swap_quick(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
