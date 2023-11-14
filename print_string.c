#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

/**
 * print_string - prints string
 * @args: number of arguments
 * Return: printed characters
 */

int print_string(va_list args)
{
        int printed = 0;
        char *s = va_arg(args, char *);
        char *s_buff = strdup(s);

        if (s_buff == NULL)
        {
                return (0);
        }

        while (s_buff[printed])
        {
                write(1, &s_buff[printed], 1);
                printed++;
        }
        free(s_buff);
        return (printed);
}
