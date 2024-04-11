#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: given arr
 * @size: size of arr
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int bubble, temp;

	while (bubble == 0)
	{
		bubble = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				bubble = 0;
			}
		}
		len--;
	}
}
