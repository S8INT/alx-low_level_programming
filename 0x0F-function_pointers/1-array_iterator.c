#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/*
 *array_iterator - excutes a function given as parameter
 *on each array element
 *@array: array to iterate over
 *@size: array size
 *@action: pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
return;
if (action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
