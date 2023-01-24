#include "main.h"

/**
 * get_width - width for printing
 *
 * @format: format for the print
 * @i: arguments list index
 * @list: arguments
 *
 * Return: width
 */

int get_width(const char *format, int *i, va_list list)
{
	int k;
	int width = 0;

	for (k = *i + 1; format[k] != '\0'; k++)
	{
		if (is_digit(format[k]))
		{
			width *= 10;
			width += format[k] - '0';
		}
		else if (format[k] == '*')
		{
			k++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = k - 1;

	return (width);
}
