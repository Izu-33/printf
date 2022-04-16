#include "main.h"

/**
 * print_char - Prints character.
 * @list: Argument list.
 * Return: Number of characters printed.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_str - Prints string.
 * @list: Argument list.
 * Return: Number of characters printed.
 */
int print_str(va_list list)
{
	int index;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	for (index = 0; str[index] != '\0'; i++)
		_putchar(str[index]);

	return (index);
}

/**
 * print_percent - Prints percent symbol.
 * @list: Argument list.
 * Return: Number of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
