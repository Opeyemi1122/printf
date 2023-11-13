#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

int print_int(va_list args);

char *strdup(const char *s);

int selector(const char *format, va_list args);

int print_string(va_list args);

int _printf(const char *format, ...);

#endif
