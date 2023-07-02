#include "main.h"
/**
 * print_octal - function to print octal
 * @list: argument
 * Return: octal
 */
int print_octal(unsigned int list)
{
	int count = 0;
	unsigned int temp;
	unsigned int octalDigit = 0;
	unsigned int power;
	int i;

	if (list == 0)
	{
		write_char('0');
		return (1);
	}
	temp = list;

	while (temp > 0)
	{
		octalDigit = temp % 8;
		temp /= 8;
		count++;
	}
	while (count > 0)
	{
		power = 1;
		i = count - 1;
		while (i > 0)
		{
			power *= 8;
			i--;
		}
		octalDigit = list / power;
		list -= octalDigital * power;
		write_char('0' + octalDigit);
		count--;
	}
	return (count);
}
