#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

int print_strng(va_list args);

int _printf(const char *format, ...);

#endif