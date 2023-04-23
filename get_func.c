#include "main.h"

/**
* get_func - search and return the correct Function.
* @s: Represents Array to check.
* Return: Always Function (if written correctly).
**/
int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};

	int index;

	for (index = 0; ops[index].c != NULL; index++)
	{
		if (*ops[index].c == s)
			return (ops[index].f);
	}
	return (NULL);
}
