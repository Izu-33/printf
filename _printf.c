#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Array to print and check type.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list list;
		int (*func)(va_list);

		va_start(list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					func = get_spec_func(format[i + 1]);
					count += (func ? func(list) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(list);
	}

	return (count);
}
