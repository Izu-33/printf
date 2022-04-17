#include "main.h"

/**
 * get_spec_func - Returns corresponding op function.
 * @s: An array to check.
 * Return: A function.
 */
int (*get_spec_func(const char *s))(va_list)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].fp != NULL; i++)
	{
		if (ops[i].c == s)
			return (ops[i].fp);
	}

	return (NULL);
}
