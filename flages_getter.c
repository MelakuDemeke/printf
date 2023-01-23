#include "main"

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
    const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
}