#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);

int _printf(const char *format, ...);

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define BUFF_SIZE 1024

/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int size_cast_arg(const char *format, int *i);

#endif /* MAIN_H */