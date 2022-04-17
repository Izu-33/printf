#include "main.h"


/**
 * read_printf - Reads through format string.
 * @format: String to print.
 * @ap: Argument list.
 *
 * Return: Number of characters read.
 */
int read_printf(const char *format, va_list ap)
{
	char tmp;
	int i;
	int ret = 0;
	int (*f)(va_list, char);

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			tmp = 0;
			f = get_spec_func(format + i + tmp + 1);
			if (f != NULL)
			{
				i += tmp + 1;
				ret += f(ap);
				continue;
			}
			else if (*(format + i + tmp + 1) == '\0')
			{
				ret = -1;
				break;
			}
		}
	}
	return (ret);
}

/**
 * _printf - Produces output according to a format.
 * @format: Array to print and check type.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int ret;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	ret = read_printf(format, ap);
	va_end(ap);
	return (ret);
}
