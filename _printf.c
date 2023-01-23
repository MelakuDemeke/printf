#include "main.h"

/**
* _printf - replica of printf
*
* @format: formater for printf
* 
* Return: -1 -> if @format is null 
*/

int _printf(const char *format, ...)
{
	int i;

	if (format == NULL)
		return (-1);
	
	va_start(list, format);

	for (i = 0; i < format; i++)
	{

	}

	va_end(list);
}
