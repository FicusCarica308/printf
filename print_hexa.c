#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *printing - prints the hexadecimal number
 *@char_count: The amount of chars to print
 *@hex: the hexadecimal string
 */
void printing(char *hex, int char_count)
{
	int i = 0;

	for (i = char_count - 1; i >= 0; i--)
		_putchar(hex[i]);
}
/**
 *length - finds the length of the final output / allocation space
 *@num: the number given to be converted
 *Return: how many characters printed out
 */
int length(unsigned int num)
{
	int char_count = 0;

	while (num != 0)
	{
		num = num / 16;
		char_count++;
	}
	return (char_count);
}
/**
 *print_hexa - prints out a given decimal number as a hexadecimal number
 *@num: the number to be converted
 *Return: how many characters printed out
 */
int print_hexa(unsigned int num)
{
	int quo = 0, i = 0, char_count = 0;
	char *hex;

	char_count = length(num);
	hex = malloc(sizeof(char) * char_count);
	if (hex == NULL)
		return (-1);
	while (num != 0)
	{
		quo = num % 16;
		num = num / 16;
		switch (quo)
		{
		case 10:
			hex[i] = 'a';
			break;
		case 11:
			hex[i] = 'b';
			break;
		case 12:
			hex[i] = 'c';
			break;
		case 13:
			hex[i] = 'd';
			break;
		case 14:
			hex[i] = 'e';
			break;
		case 15:
			hex[i] = 'f';
			break;
		default:
			hex[i] = '0' + quo;
			break;
		}
		i++;
	}
	printing(hex, char_count);
	free(hex);
	return (char_count);
}
