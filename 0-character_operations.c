#include "main.h"

/**
 * print_c - Print characters (%c).
 * @ar_list: Stores the a list of characters.
 * Return: Number of parameters printed.
 */
int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}

/**
* print_s - Print string (%s).
* @ar_list: Store the a list of characters.
* Return: Number of parameters printed.
*/
int print_s(va_list ar_list)
{
	int index, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (index = 0; str[index]; index++)
		count += _putchar(str[index]);

	return (count);
}
