#include "sort.h"

/**
 *bubble_sort - An Array of int is Sorted in Ascending Order.
 *@array: Array Of Number's
 *@size: size Of An Array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = num;
				print_array(array, size);
			}
		}
	}
}
