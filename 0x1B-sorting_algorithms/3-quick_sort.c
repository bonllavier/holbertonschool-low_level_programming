#include "sort.h"

/**
 *quick_sort - insert
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
	unsigned int tmp = 0;

	for (j = low ; j <= high - 1 ; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			if (&arr[i] != &arr[j])
			{
				print_array(arr, size);
			}
		}
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;
	if (&arr[i + 1] != &arr[high])
	{
		print_array(arr, size);
	}
	return (i + 1);
}
