#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct format_spec - Structure qui définit les différents formats.
 * @specifier: le caractère représentant le format (%c, %s, %d, etc.).
 * @function: pointeur vers la fonction qui gère ce format.
 */
typedef struct format_spec
{
	char specifier;
	int (*function)(va_list list);
} format_spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_percent(va_list list);
int print_recursion(int n);
int print_int(va_list list);

#endif
