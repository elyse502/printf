#include "main.h"
/**
 * print_b - Convert of decimals in binary.
 * @binary_list: Store the argument values.
 * Return: Always The count.
 */

int print_b(va_list binary_list)
{
	unsigned int index, count, Num, binary, arr[32];

	index = 0, count = 0;
	Num = va_arg(binary_list, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
		index = count - 1;
		while (index > 0)
		{
			_putchar('0' + arr[index]);
			index--;
		}
		_putchar('0' + arr[index]);
	}
	return (count);
}
