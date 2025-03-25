#include "main.h"

/**
 * _printf - Ecrire une fonction simplifiee de 'printf'
 * @format: Liste des types d'arguments
 * Return:  le nombre de caracteres imprimes
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int j;
	int count = 0;

	
	va_start(args, format);
	for (i = 0; format[i] !='\0'; i++)
	{

		
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			int caractere = va_arg(args, int);
			_putchar(caractere);
			count++;
			i++;
		}

		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *string = va_arg(args, char *);
			for (j = 0; string[j] != '\0'; j++)
			{
				_putchar(string[j]);
				count++;
			}
			i++;
		}

		else if (format[i] =='%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

	}

	va_end(args);
	return count;

}
