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
