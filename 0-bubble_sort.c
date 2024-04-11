#include "sort.h"
/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: given arr
 * @size: size of arr
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int bubble;

	while (bubble == 0)
	{
		bubble = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = 0;
			}
		}
		len--;
	}
}
