#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of inputs
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);

	int x, sum = 0;

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);

	if (n == 0)
	{
		return (0);
	}
}
