#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print char
 * @args: no of arguments
 * Return: printed
 */

int print_chr(va_list args)
{
	char c = va_arg(args, int);
	char *char_buff = (char *)malloc(2);

	if (char_buff == NULL)
	{
		return (0);
	}
	char_buff[0] = c;
	char_buff[1] = '\0';

	write(1, char_buff, 1);
	free(char_buff);
	return (1);
}
