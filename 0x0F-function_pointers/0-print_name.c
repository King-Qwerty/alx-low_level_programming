#include "function_pointers.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the string to be added
 * @f: the pointer to the function
=======

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print with
 *
>>>>>>> refs/remotes/origin/master
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
<<<<<<< HEAD
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
=======
	if (name != NULL && f != NULL)
		f(name);
>>>>>>> refs/remotes/origin/master
}
