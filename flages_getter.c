#include "main.h"

/**
 * get_flags - check flags
 *
 * @format: format of string
 * @i: parameter
 *
 * Return: flag
 */
int get_flags(const char *format, int *i)
{
int j, k;
	int flags = 0;
	const char FLAGS[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_NAME[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (k = *i + 1; format[k] != '\0'; k++)
	{
		for (j = 0; FLAGS[j] != '\0'; j++)
			if (format[k] == FLAGS[j])
			{
				flags |= FLAGS_NAME[j];
				break;
			}

		if (FLAGS[j] == 0)
			break;
	}

	*i = k - 1;

	return (flags);
}