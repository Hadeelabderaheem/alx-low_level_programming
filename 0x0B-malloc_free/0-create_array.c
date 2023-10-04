#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initialized it
 * with a specific char.
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
