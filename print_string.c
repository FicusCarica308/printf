#include "holberton.h"
#include <stdlib.h>
/**
 *print_string - this function prints a string to the standard output
 *@str: The string to be output
 *Return: returns the amount of characters printed from the function
 */
int print_string(char *str)
{
	int num_char = 0;
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		length ++;
		j++;
	}
	if (length == 0)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		num_char++;
	}
	return (num_char);
}
