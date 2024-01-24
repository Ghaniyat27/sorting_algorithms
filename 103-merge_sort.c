#include "sort.h"
#include <stdio.h>


/**
 * merge -  Sort an Array with Merge Sort
 * @array: Array Of int's
 * @size: Size of the Array
 * @l: Pointer to the Left Array
 * @r: Pointer to the Right Array
 **/
void merge(int *array, int *l, int *r, size_t size)
{
	int i = 0, j = 0, k = 0;
	int size_left, size_right;

	size_left = size / 2;
	size_right = size - size_left;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(l, size_left);
	printf("[right]: ");
	print_array(r, size_right);

	while (i < size_left && j < size_right)
	{
		if (l[i] < r[j])
			array[k++] = l[i++];
		else
			array[k++] = r[j++];
	}

	while (i < size_left)
		array[k++] = l[i++];

	while (j < size_right)
		array[k++] = r[j++];
	printf("[Done]: ");
	print_array(array, size);
}
/**
 * merge_sort - Sort's an Array of int in Ascending Order Using
 * the Merge Sort Algorithm
 * @array: Pointer to The Array
 * @size: Size of The Array
 **/
void merge_sort(int *array, size_t size)
{
	size_t mid = 0, i;
	int left[1000];
	int right[1000];

	if (!array)
		return;

	if (size < 2)
		return;

	mid = size / 2;
	/*left = (int*)malloc(sizeof(int) * mid);*/
	/*right = (int*)malloc(sizeof(int) * (size - mid));*/

	for (i = 0; i < mid; i++)
		left[i] = array[i];

	for (i = mid; i < size; i++)
		right[i - mid] = array[i];

	merge_sort(left, mid);
	merge_sort(right, size - mid);
	merge(array, left, right, size);
}
