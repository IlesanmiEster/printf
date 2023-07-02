#include "main.h"
/**
 * print_string - is a function that print string
 * @dest: argumet
 * Return: string or NULL
 */
int print_string(char *dest)
{
	int index = 0;
	int string = 0;

	while  (dest[index] != '\0')
	{
		write_char(dest[index]);
		index++;
		string++;
	}
	return (string);
}
