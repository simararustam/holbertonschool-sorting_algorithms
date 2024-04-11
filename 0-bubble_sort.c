#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: given arr
 * @size: size of arr
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped, temp;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				swapped = 1;
			}
		}
		if (swapped)
		{
			print_array(array, size);
		}
	}
}
