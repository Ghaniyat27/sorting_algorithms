#include "sort.h"

/**
 * swap - Swap Two Interger's
 * @a: int
 * @b: int
 * Return: (void) Swaped int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - Partition an Array And Using Pivot
 * @array: Array
 * @low: Int
 * @high: Int
 * @size: Size of The Array (size_t)
 * Return: Index of Pivot (int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}
/**
 * lomuto_qsort - Sorting Recursively An Array
 * @array: Array to be Sorted
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: Size of The Array
 * Return: void
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - Quick Sort Algorithme using lomuto partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Sorted Array (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
