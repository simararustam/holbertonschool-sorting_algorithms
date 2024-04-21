#include "sort.h"
/**
 * swap - swaps two integers
 * @first: first integer
 * @second: second integer
 */
void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}
/**
 * partition - partitions array using lomuto scheme
 * @arr: array to partition
 * @size: size of array
 * @low: low index
 * @high: high index
 * Return: index of pivot
 */
int partition(int *arr, size_t size, ssize_t low, ssize_t high)
{
	ssize_t i, j;
	int pivot;

	pivot = arr[high];

	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (arr[high] < arr[i + 1])
	{
		swap(&arr[i + 1], &arr[j]);
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 * sort - sorts array using lomuto scheme
 * @arr: array to sort
 * @size: size of array
 * @low: low index
 * @high: high index
 */
void sort(int *arr, size_t size, ssize_t low, ssize_t high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, size, low, high);
		sort(arr, size, low, pivot - 1);
		sort(arr, size, pivot + 1, high);
	}
}
/**
  * quick_sort - sorts an array of integers in ascending order
  * @array: array of numbers
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	sort(array, size, 0, size - 1);
}
