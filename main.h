#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h> 
#include <stdio.h>
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
int _printf(const char * format, ...);
int print_char(va_list list);
int print_str(va_list list);

#endif
