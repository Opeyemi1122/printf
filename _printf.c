#include "main.h"
/**
 * _printf - produces output according to format
 * @format: pointer to strings
 * Return: amount of characters printed
 */

int _printf(const char *format, ...)
{
        int printed = 0;
        va_list args;

        if (format == NULL)
                return (-1);
        va_start(args, format);

        while (*format)
        {
                if (*format == '%')
                {
                        format++;
                        printed += selector(format, args);
                }
                else
                {
                        write(1, format, 1);
                        printed++;
                }
                format++;
        }
        va_end(args);

        return (printed);
}
