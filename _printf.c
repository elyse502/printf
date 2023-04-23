#include "main.h"
/**
* _printf - Function.
* @format: Represents an array to print and check type.
* Return: The count of character printed.
**/
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int index;
		va_list ar_list;
		int (*o)(va_list);

		va_start(ar_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (index = 0; format[index] != '\0'; index++)
		{
			if (format[index] == '%')
			{
				if (format[index + 1] == '%')
				{
					count += _putchar(format[index]);
					index++;
				}
				else if (format[index + 1] != '\0')
				{
					o = get_func(format[index + 1]);
					count += (o ? o(ar_list) : _putchar(format[index]) + _putchar(format[index + 1]));
					index++;
				}
			}
			else
				count += _putchar(format[index]);
		}
		va_end(ar_list);
	}

	return (count);
}
