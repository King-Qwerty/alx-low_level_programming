#include "function_pointers.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: the array
 * @size: how many elem to be printed
 * @action: pointer to be printed in regular or hex
=======

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array to execute func on
 * @size: size of array
 * @action: pointer to the func to use
 *
>>>>>>> refs/remotes/origin/master
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
<<<<<<< HEAD
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
=======
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
>>>>>>> refs/remotes/origin/master
	}
}
