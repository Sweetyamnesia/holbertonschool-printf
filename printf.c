#include "main.h"

/**
 * _printf - Ecrire une fonction simplifiee de 'printf'
 * @format: Liste des types d'arguments
 * Return:  le nombre de caracteres imprimes
 */

int _printf(const char *format, ...)
{
    va_list list;
    int i = 0, j = 0, count = 0, trouve_specificateur = 0;

    format_spec_t spec_array[] = {
    {'c', print_char}, {'s', print_string}, {'d', print_int},
    {'i', print_int}, {'%', print_percent}, {'\0', NULL}
    };

    if (format == NULL)
        return (-1);

    if (*(format + 1) == '\0')
    {
        return (-1);
    }
    

    va_start(list, format);
    while (format[i])
    {

        if (format[i] == '%')
        {
            i++;
            trouve_specificateur = 0;

            for (j = 0; spec_array[j].specifier != '\0'; j++)
            {
                if (format[i] == spec_array[j].specifier)
                {
                    count += spec_array[j].function(list);
                    trouve_specificateur = 1;
                    break;
                }

                if (trouve_specificateur == 0)
                {
                    _putchar('%');
                    _putchar(format[i]);
                    count += 2;
                }
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(list);
    return (count);

}
