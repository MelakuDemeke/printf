#include "main.h"

void print_buffer(char buffer[], int *index_of_buffer);

/**
 * _printf - replica of printf
 *
 * @format: formater for printf
 * 
 * Return: -1 -> if @format is null 
 */

int _printf(const char *format, ...)
{
	int i, index_of_buffer = 0, printed_chars = 0;
	int flags, width, precision, size;
	char buffer[BUFF_SIZE];
	va_list list;

	if (format == NULL)
		return (-1);
	
	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[index_of_buffer++] = format[i];
			if (index_of_buffer == BUFF_SIZE)
				print_buffer(buffer, &index_of_buffer);

			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &index_of_buffer);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			
		}
	}

	va_end(list);
}

/**
* print_buffer - print content from buffer
*
* @buffer: array of chars
* @index_of_buffer: position to next char
*/

void print_buffer(char buffer[], int *index_of_buffer)
{
	if (*index_of_buffer > 0)
		write(1, &buffer[0], *index_of_buffer);

	*index_of_buffer = 0;
}
