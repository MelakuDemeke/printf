#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - replica of printf
 *
 * @format: formater for printf
 * 
 * Return: -1 -> if @format is null 
 */

int _printf(const char *format, ...)
{
	int i, buff_ind = 0, printed_chars = 0;
	char buffer[BUFF_SIZE];
	va_list list;

	if (format == NULL)
		return (-1);
	
	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);

			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
		}
	}

	va_end(list);
}

/**
* print_buffer - print content from buffer
*
* @buffer: array of chars
* @buff_ind: position to next char
*/

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
