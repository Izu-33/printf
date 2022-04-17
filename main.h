#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct op - operator structure
 * @c: apecifier
 * @fp: function pointer
 */
typedef struct op
{
	char *c;
	int (*fp)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_percent(__attribute__((unused))va_list list);
int (*get_spec_func(const char *s))(va_list);

#endif
