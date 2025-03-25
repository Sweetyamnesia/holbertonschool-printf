#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

typedef struct display
{
    char *spec;
    int (*display)(va_list lst);
} function;


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list display);
int print_string(va_list display);
int print_percent(va_list display);


#endif
