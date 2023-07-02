#include "main.h"

/**
 * print_int - print integer
 * @list: argument to print
 * Return: number of character printed
 */
int print_int(int list)
{
	int num = 0;

	if (list == 0)
	{
		write_char('0');
		return (1);
	}

	if (list < 0)
	{
		write_char('-');
		num++;
		list = -list;
	}
	if (list / 10)
	{
		num += print_int(list / 10);
	}
	write_char('0' + (list % 10));
	num++;
	return (num);
}



