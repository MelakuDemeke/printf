#include "main.h"
/**
 * get_size - to calculate the size to cast the argument
 * @format: a formatted string
 * @n: list of arguments to be printed
 * Return: value of precision
 */
int size_cast_arg(const char *format, int *n)
{
   int curr_i = *n + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*n = curr_i - 1;
	else
		*n = curr_i;

	return (size);
}