#include "main.h"
#include <stdio.h>

/**
 * _strlen -Returns the length of a string.
 * @str: The string to get the length of
 * Return: Thr length of @str.
 */
size_t_strlen(const char *str)

{
	size_t length =0;

	while (*str++)
	length++;
	return (length);

}
