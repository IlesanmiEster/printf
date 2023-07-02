#include "main.h"
/**
 * write_char - function that writes to stdout
 * @c: character
 * Return: 1
 */
int write_char (char c)
{
	return (write(1, &c, 1));
}
