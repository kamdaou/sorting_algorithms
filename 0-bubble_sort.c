#include "sort.h"

/**
 * bubble_sort - Sorts array using bubble sort algo
 *
 * @array: The given array.
 * @size: The length of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, newN, swap;
	int len = size;

	do {
		newN = 0;
		for (i = 1; i <= len - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap = array[i];
				array[i] = array[i - 1];
				array[i - 1] = swap;
				newN = i;
				print_array(array, size);
			}
		}
		len = newN;
	} while (len >= 1);
}
